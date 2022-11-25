#ifndef GAME_ENEMY_H
#define GAME_ENEMY_H
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
        float get_x() const;
        float get_y() const;
        float get_castle_damage() const;
        void kill();
        void get_damage(float dmg);

    };

}

#endif
