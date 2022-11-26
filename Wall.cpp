#include "Wall.h"

namespace td {
    void Wall::check_enemy(std::unique_ptr<Enemy> enemy) {
        return;
    }

    void Wall::get_damage(float dmg) {
        current_health -= dmg;
        if(current_health <= 0)
            is_entire = false;
    }

    bool Wall::get_entire() const {
        return is_entire;
    }
}