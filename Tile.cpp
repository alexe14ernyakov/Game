#include "Tile.h"

namespace td {

    Tile::Tile() {
        type = PLAIN;
    }

    Tile::Tile(TileType t) {
        type = t;
    }

    Building *Tile::get_building() const {
        return building;
    }

    void Tile::set_building(Building *build) {
        building = build;
    }


}