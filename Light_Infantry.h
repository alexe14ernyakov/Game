#ifndef GAME_LIGHT_INFANTRY_H
#define GAME_LIGHT_INFANTRY_H
#include "Enemy.h"

namespace td {

    class Light_Infantry : Enemy{
    private:
        float dodge_chance;

    public:
        Light_Infantry(float x, float y);
    };

}

#endif
