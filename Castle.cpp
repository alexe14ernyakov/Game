#include "Castle.h"

namespace td {
    Castle::Castle() {
        max_level = config::GLOBAL_CONST_MAX_CASTLE_LEVEL;
        max_health = config::GLOBAL_CONST_MAX_CASTLE_HEALTH;
        current_health = config::GLOBAL_CONST_MAX_CASTLE_HEALTH;
        yield = config::GLOBAL_CONST_CASTLE_YIELD;
        regeneration_speed = config::GLOBAL_CONST_CASTLE_REGENERATION_SPEED;
        upgrade_price = config::GLOBAL_CONST_CASTLE_UPGRADE_PRICE;
    }

    void Castle::get_damage(float dmg) {
        current_health -= dmg;
        if(current_health <= 0)
            is_entire = false;
    }
}