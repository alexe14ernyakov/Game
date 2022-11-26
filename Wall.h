#ifndef GAME_WALL_H
#define GAME_WALL_H
#include "Building.h"

namespace td {

    class Wall : Building {
    private:
        bool  is_entire;
        float max_health;
        float current_health;

    public:
        void check_enemy(std::unique_ptr<Enemy> enemy) override;
        void get_damage(float dmg) override;
    };

}

#endif
