#ifndef GAME_HEAVY_INFANTRY_H
#define GAME_HEAVY_INFANTRY_H
#include "Enemy.h"

namespace td {

    class Heavy_Infantry : Enemy {
    private:
        float firing_range;
        float damage;

    public:
        Heavy_Infantry(float x_pos, float y_pos);
        void check_building(Building &building) override;
    };

}

#endif
