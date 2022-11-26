#include "Heavy_Infantry.h"

namespace td {

    Heavy_Infantry::Heavy_Infantry(float x_pos, float y_pos) {
        x = x_pos;
        y = y_pos;
        max_health = config::GLOBAL_CONST_HEAVY_INFANTRY_MAX_HEALTH;
        current_health = config::GLOBAL_CONST_HEAVY_INFANTRY_MAX_HEALTH;
        regeneration_speed = config::GLOBAL_CONST_HEAVY_INFANTRY_REGENERATION_SPEED;
        move_speed = config::GLOBAL_CONST_HEAVY_INFANTRY_MOVE_SPEED;
        castle_damage = config::GLOBAL_CONST_HEAVY_INFANTRY_CASTLE_DAMAGE;
        firing_range = config::GLOBAL_CONST_HEAVY_INFANTRY_FIRING_RANGE;
        damage = config::GLOBAL_CONST_HEAVY_INFANTRY_DAMAGE;
    }

    void Heavy_Infantry::check_building(Building &building) {
        float r = sqrtf( powf(x - building.get_x(), 2) + powf(y - building.get_y(), 2));
        if( r <= firing_range){
             building.get_damage(damage);
        }
    }
}