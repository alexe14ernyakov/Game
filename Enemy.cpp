#include "Enemy.h"

namespace td {
    float Enemy::get_x() const {
        return x;
    }

    float Enemy::get_y() const {
        return y;
    }

    float Enemy::get_castle_damage() const {
        return castle_damage * current_health;
    }

    void Enemy::kill() {
        is_alive = false;
    }

    void Enemy::get_damage(float dmg) {
        current_health -= dmg;
        if(current_health <= 0)
            kill();
    }

    void Enemy::check_building(Building &building) {
        return;
    }
}