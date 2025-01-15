#pragma once
#include "battle_game/core/unit.h"

namespace battle_game::unit {
class SmallTurret : public Unit {
 public:
  SmallTurret(GameCore *game_core, uint32_t id, uint32_t player_id, glm::vec2 position);
  void Render() override;
  void Update() override;
  [[nodiscard]] bool IsHit(glm::vec2 position) const override;

 private:
  void TurretRotate();
  void Fire();
  [[nodiscard]] const char *UnitName() const override;
  [[nodiscard]] const char *Author() const override;

  float turret_rotation_{0.0f};
  float life_time_{10.0f};
  float fire_count_down_{1.0f};
};
}  // namespace battle_game::unit