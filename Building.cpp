#include "Building.h"

namespace td {

    float Building::get_x() const {
        return x;
    }

    float Building::get_y() const {
        return y;
    }

    void Building::check_enemy(std::unique_ptr<Enemy> enemy) {
        return;
    }

}