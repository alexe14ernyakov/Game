#ifndef GAME_BUILDING_H
#define GAME_BUILDING_H
#include <memory>
#include "Enemy.h"

namespace td {

    class Building {
    protected:
        float x;
        float y;

    public:
        float get_x() const;
        float get_y() const;

        virtual void check_enemy(std::unique_ptr<Enemy> enemy);
    };

}

#endif
