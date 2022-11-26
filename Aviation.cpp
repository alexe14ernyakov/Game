#include "Aviation.h"

namespace td {
    void Aviation::check_building(Building &building) {
        if( (std::abs(x - building.get_x()) <= 5) && (std::abs(y - building.get_y()) <= 5) )
            if( ammunition > 0){
                building.get_damage(damage);
                ammunition--;
            }
    }
}