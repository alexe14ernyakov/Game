#include "Light_Infantry.h"

namespace td {
    Light_Infantry::Light_Infantry(float x_pos, float y_pos) {
        x = x_pos;
        y = y_pos;
        max_health = config::GLOBAL_CONST_LIGHT_INFANTRY_MAX_HEALTH;
        current_health = config::GLOBAL_CONST_LIGHT_INFANTRY_MAX_HEALTH;
        regeneration_speed = config::GLOBAL_CONST_LIGHT_INFANTRY_REGENERATION_SPEED;
        move_speed = config::GLOBAL_CONST_LIGHT_INFANTRY_MOVE_SPEED;
        castle_damage = config::GLOBAL_CONST_LIGHT_INFANTRY_CASTLE_DAMAGE;
        dodge_chance = config::GLOBAL_CONST_LIGHT_INFANTRY_DODGE_CHANCE;
    }
}