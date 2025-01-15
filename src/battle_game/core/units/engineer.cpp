#include "engineer.h"
#include "battle_game/core/game_core.h"
#include "battle_game/core/units/small_turret.h"
#include "battle_game/graphics/graphics.h"

namespace battle_game::unit {

namespace {
uint32_t engineer_model_index = 0xffffffffu;
}  // namespace

Engineer::Engineer(GameCore *game_core, uint32_t id, uint32_t player_id)
    : Unit(game_core, id, player_id) {
  rotation_ = 0.0f;
  if (!~engineer_model_index) {
    auto mgr = AssetsManager::GetInstance();
    {
      std::vector<ObjectVertex> engineer_vertices;
      std::vector<uint32_t> engineer_indices;
      const int precision = 60;
      const float inv_precision = 1.0f / float(precision);
      const float head_radius = 0.5f;
      const float hand_radius = 0.2f;
      const float hand_offset = 0.4f;

      // Big circle
      for (int i = 0; i < precision; i++) {
          auto theta = (float(i) + 0.5f) * inv_precision;
          theta *= glm::pi<float>() * 2.0f;
          auto sin_theta = std::sin(theta);
          auto cos_theta = std::cos(theta);
          engineer_vertices.push_back({{sin_theta * head_radius, cos_theta * head_radius},
                                       {0.0f, 0.0f},
                                       {1.0f, 0.0f, 0.0f, 1.0f}});
          engineer_indices.push_back(i);
          engineer_indices.push_back((i + 1) % precision);
          engineer_indices.push_back(precision);
      }
      engineer_vertices.push_back(
          {{0.0f, 0.0f}, {0.0f, 0.0f}, {1.0f, 0.0f, 0.0f, 1.0f}});

      // Left hand circle
      int hand_start_index = engineer_vertices.size();
      for (int i = 0; i < precision; i++) {
          auto theta = (float(i) + 0.5f) * inv_precision;
          theta *= glm::pi<float>() * 2.0f;
          auto sin_theta = std::sin(theta);
          auto cos_theta = std::cos(theta);
          engineer_vertices.push_back({{sin_theta * hand_radius - hand_offset, cos_theta * hand_radius - head_radius},
                                       {0.0f, 0.0f},
                                       {1.0f, 1.0f, 1.0f, 1.0f}});
          engineer_indices.push_back(hand_start_index + i);
          engineer_indices.push_back(hand_start_index + (i + 1) % precision);
          engineer_indices.push_back(hand_start_index + precision);
      }
      engineer_vertices.push_back(
          {{-hand_offset, -head_radius}, {0.0f, 0.0f}, {1.0f, 1.0f, 1.0f, 1.0f}});

      // Right hand circle
      hand_start_index = engineer_vertices.size();
      for (int i = 0; i < precision; i++) {
          auto theta = (float(i) + 0.5f) * inv_precision;
          theta *= glm::pi<float>() * 2.0f;
          auto sin_theta = std::sin(theta);
          auto cos_theta = std::cos(theta);
          engineer_vertices.push_back({{sin_theta * hand_radius + hand_offset, cos_theta * hand_radius - head_radius},
                                       {0.0f, 0.0f},
                                       {1.0f, 1.0f, 1.0f, 1.0f}});
          engineer_indices.push_back(hand_start_index + i);
          engineer_indices.push_back(hand_start_index + (i + 1) % precision);
          engineer_indices.push_back(hand_start_index + precision);
      }
      engineer_vertices.push_back(
          {{hand_offset, -head_radius}, {0.0f, 0.0f}, {1.0f, 1.0f, 1.0f, 1.0f}});

      engineer_model_index = mgr->RegisterModel(engineer_vertices, engineer_indices);
    }
  }
}

void Engineer::Render() {
  battle_game::SetTransformation(position_, rotation_);
  battle_game::SetTexture(0);
  battle_game::SetColor(game_core_->GetPlayerColor(player_id_));
  battle_game::DrawModel(engineer_model_index);
}

void Engineer::Update() {
  rotation_ = 0.0f;
  EngineerMove(1.5f);
  DeployTurret();
  if (deploy_count_down_) {
    deploy_count_down_--;
  }
}

void Engineer::EngineerMove(float velocity) {
  auto player = game_core_->GetPlayer(player_id_);
  if (player) {
    auto &input_data = player->GetInputData();
    glm::vec2 offset{0.0f};
    if (input_data.key_down[GLFW_KEY_W]) {
      offset.y += 1.0f;
    }
    if (input_data.key_down[GLFW_KEY_S]) {
      offset.y -= 1.0f;
    }
    if (input_data.key_down[GLFW_KEY_A]) {
      offset.x -= 1.0f;
    }
    if (input_data.key_down[GLFW_KEY_D]) {
      offset.x += 1.0f;
    }
    float speed = velocity * GetSpeedScale();
    offset *= kSecondPerTick * speed;
    auto new_position =
        position_ + glm::vec2{glm::rotate(glm::mat4{1.0f}, rotation_,
                                          glm::vec3{0.0f, 0.0f, 1.0f}) *
                              glm::vec4{offset, 0.0f, 0.0f}};
    if (!game_core_->IsBlockedByObstacles(new_position)) {
      game_core_->PushEventMoveUnit(id_, new_position);
    }
  }
}

void Engineer::DeployTurret() {
  if (deploy_count_down_ == 0){
    auto player = game_core_->GetPlayer(player_id_);
    if (player) {
      auto &input_data = player->GetInputData();
      if (input_data.mouse_button_down[GLFW_MOUSE_BUTTON_LEFT]) {
        glm::vec2 turret_position = position_;
        game_core_->AddUnit<unit::SmallTurret>(player_id_, turret_position);
        deploy_count_down_ = 5 * kTickPerSecond;
      }
    }
  }
}

bool Engineer::IsHit(glm::vec2 position) const {
  float radius = 0.4f;
  glm::vec2 center = position_;
  return glm::distance(position, center) < radius;
}

float Engineer::BasicMaxHealth() const {
  return 20.0f;
}

const char *Engineer::UnitName() const {
  return "Engineer";
}

const char *Engineer::Author() const {
  return "JerryLin828";
}
}  // namespace battle_game::unit