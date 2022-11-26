#include "Tower.h"

namespace td {
    void Tower::check_enemy(std::unique_ptr<Enemy> enemy) {
        float r = sqrtf(powf(x - enemy->get_x(), 2) + powf(x - enemy->get_x(), 2) );
        if(r <= firing_range)
            enemy->get_damage(damage);
    }

    void Tower::get_damage(float dmg) {
        current_health -= dmg;
        if(current_health <= 0)
            is_entire = false;
    }
}