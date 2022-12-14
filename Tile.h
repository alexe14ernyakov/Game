#ifndef GAME_TILE_H
#define GAME_TILE_H
#include "Building.h"

namespace td {

    enum TileType{
        PLAIN,
        WATER,
        MOUNTAIN
    };

    class Tile {
    private:
        TileType type;
        Building* building = nullptr;

    public:
        Tile();
        Tile(TileType t);
        void set_building(Building* build);
        Building* get_building() const;
    };

}

#endif
