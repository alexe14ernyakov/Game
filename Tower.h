#ifndef GAME_TOWER_H
#define GAME_TOWER_H
#include "Building.h"

namespace td {

    class Tower : Building {
    private:
        bool  is_entire;
        int   max_level;
        int   level;
        float firing_range;
        float damage;
        float fire_rate;
        int   upgrade_price;
    };

}

#endif
