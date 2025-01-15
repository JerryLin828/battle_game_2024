#include "small_turret.h"

#include "battle_game/core/game_core.h"
#include "battle_game/core/bullets/bullets.h"
#include "battle_game/graphics/graphics.h"

namespace battle_game::unit {

namespace {
uint32_t tank_turret_model_index = 0xffffffffu;
}  // namespace

SmallTurret::SmallTurret(GameCore *game_core, uint32_t id, uint32_t player_id, glm::vec2 position)
    : Unit(game_core, id, player_id){
  position_ = position;
  if (!~tank_turret_model_index) {
    auto mgr = AssetsManager::GetInstance();
  {
    std::vector<ObjectVertex> turret_vertices;
    std::vector<uint32_t> turret_indices;
    const int precision = 60;
    const float inv_precision = 1.0f / float(precision);
    for (int i = 0; i < precision; i++) {
      auto theta = (float(i) + 0.5f) * inv_precision;
      theta *= glm::pi<float>() * 2.0f;
      auto sin_theta = std::sin(theta);
      auto cos_theta = std::cos(theta);
      turret_vertices.push_back({{sin_theta * 0.5f, cos_theta * 0.5f},
                                 {0.0f, 0.0f},
                                 {0.7f, 0.7f, 0.7f, 1.0f}});
      turret_indices.push_back(i);
      turret_indices.push_back((i + 1) % precision);
      turret_indices.push_back(precision);
    }
    turret_vertices.push_back(
        {{0.0f, 0.0f}, {0.0f, 0.0f}, {0.7f, 0.7f, 0.7f, 1.0f}});
    turret_vertices.push_back(
        {{-0.1f, 0.0f}, {0.0f, 0.0f}, {0.7f, 0.7f, 0.7f, 1.0f}});
    turret_vertices.push_back(
        {{0.1f, 0.0f}, {0.0f, 0.0f}, {0.7f, 0.7f, 0.7f, 1.0f}});
    turret_vertices.push_back(
        {{-0.1f, 1.2f}, {0.0f, 0.0f}, {0.7f, 0.7f, 0.7f, 1.0f}});
    turret_vertices.push_back(
        {{0.1f, 1.2f}, {0.0f, 0.0f}, {0.7f, 0.7f, 0.7f, 1.0f}});
    turret_indices.push_back(precision + 1 + 0);
    turret_indices.push_back(precision + 1 + 1);
    turret_indices.push_back(precision + 1 + 2);
    turret_indices.push_back(precision + 1 + 1);
    turret_indices.push_back(precision + 1 + 2);
    turret_indices.push_back(precision + 1 + 3);
    tank_turret_model_index =
        mgr->RegisterModel(turret_vertices, turret_indices);
    }
  }
}

void SmallTurret::Render() {
  glm::vec2 scale = glm::vec2(0.5f);
  battle_game::SetTransformation(position_, rotation_, scale);
  battle_game::SetTexture(0);
  battle_game::SetColor(game_core_->GetPlayerColor(player_id_));
  battle_game::SetRotation(turret_rotation_);
  battle_game::DrawModel(tank_turret_model_index);
}

void SmallTurret::Update() {
  life_time_ -= kSecondPerTick;
  if (life_time_ <= 0.0f) {
    game_core_->PushEventRemoveUnit(id_);
    return;
  }
  TurretRotate();
  Fire();
}

bool SmallTurret::IsHit(glm::vec2 position) const {
  float radius = 0.5f;
  glm::vec2 center = position_;
  return glm::distance(position, center) < radius;
}

void SmallTurret::TurretRotate() {
  Unit *closest_enemy = nullptr;
  float closest_distance = std::numeric_limits<float>::max();
  for (auto &unit : game_core_->GetUnits()) {
    if (unit.first == id_ || unit.second->GetPlayerId() == player_id_) {
      continue;
    }
    float distance = glm::distance(position_, unit.second->GetPosition());
    if (distance < closest_distance) {
      closest_distance = distance;
      closest_enemy = unit.second.get();
    }
  }

  if (closest_enemy) {
    auto diff = closest_enemy->GetPosition() - position_;
    turret_rotation_ = std::atan2(diff.y, diff.x) - glm::radians(90.0f);
  }
}

void SmallTurret::Fire() {
  if (fire_count_down_ == 0) {
    auto player = game_core_->GetPlayer(player_id_);
    if (player) {
      auto &input_data = player->GetInputData();
      if (input_data.key_down[GLFW_KEY_P]) {
        auto velocity = Rotate(glm::vec2{0.0f, 20.0f}, turret_rotation_);
        GenerateBullet<bullet::CannonBall>(
            position_ + Rotate({0.0f, 1.2f}, turret_rotation_),
            turret_rotation_, GetDamageScale(), velocity);
        fire_count_down_ = kTickPerSecond;  // Fire interval 1 second.
      }
    }
  }
  if (fire_count_down_) {
    fire_count_down_--;
  }
}

const char *SmallTurret::UnitName() const {
  return "Small Turret";
}

const char *SmallTurret::Author() const {
  return "JerryLin828";
}
}  // namespace battle_game::unit