#ifndef GAME_ENEMY_H
#define GAME_ENEMY_H

namespace td {

    class Enemy {
    protected:
        bool  is_alive;
        float x;
        float y;
        float max_health;
        float current_health;
        float regeneration_speed;
        float move_speed;
        float castle_damage;

    };

}

#endif
