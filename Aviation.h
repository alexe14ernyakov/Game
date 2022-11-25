#ifndef GAME_AVIATION_H
#define GAME_AVIATION_H
#include "Enemy.h"

namespace td {

    class Aviation : Enemy{
    private:
        int   ammunition;
        float damage;
    };

}

#endif
