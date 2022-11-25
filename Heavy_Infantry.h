#ifndef GAME_HEAVY_INFANTRY_H
#define GAME_HEAVY_INFANTRY_H
#include "Enemy.h"

namespace td {

    class Heavy_Infantry : Enemy {
    private:
        float firing_range;
        float damage;
    };

}

#endif
