#ifndef GAME_CASTLE_H
#define GAME_CASTLE_H
#include "Config.h"

namespace td {

    class Castle {
    private:
        bool  is_entire = true;
        int   max_level;
        int   level = 1;
        float max_health;
        float current_health;
        int   balance = 0;
        float yield;
        float regeneration_speed;
        int   upgrade_price;

    public:
        Castle();
        void get_damage(float dmg);
    };

}

#endif
