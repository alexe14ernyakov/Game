#ifndef GAME_TOWER_H
#define GAME_TOWER_H
#include <cmath>
#include "Building.h"

namespace td {

    class Tower : Building {
    private:
        bool  is_entire;
        int   max_level;
        int   level;
        float max_health;
        float current_health;
        float firing_range;
        float damage;
        int fire_rate;
        int   upgrade_price;

    public:
        void check_enemy(std::unique_ptr<Enemy> enemy) override;
        void get_damage(float dmg) override;
    };

}

#endif
