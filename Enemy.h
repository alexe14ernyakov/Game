#ifndef GAME_ENEMY_H
#define GAME_ENEMY_H
#include <cmath>
#include "Building.h"
#include "Config.h"

namespace td {

    class Enemy {
    protected:
        bool  is_alive = true;
        float x;
        float y;
        float max_health;
        float current_health;
        float regeneration_speed;
        float move_speed;
        float castle_damage;

    public:
        Enemy();
        float get_x() const;
        float get_y() const;
        float get_castle_damage() const;
        void kill();
        void get_damage(float dmg);
        virtual void check_building(Building &building);
    };

}

#endif
