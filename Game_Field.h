#ifndef GAME_GAME_FIELD_H
#define GAME_GAME_FIELD_H
#include <memory>
#include <vector>
#include <list>
#include "Tile.h"
#include "Enemy.h"
#include "Castle.h"
#include "Config.h"

namespace td {

    typedef struct Line{
    private:
        std::vector<Tile> line;

    public:
        Line(int size);

    } Line;

    class Game_Field {
    private:
        bool game_status = true;
        int height;
        int width;
        std::vector<Line> game_field;
        int enemies_count = 0;
        std::list<std::unique_ptr<Enemy>> enemies;
        std::unique_ptr<Castle> castle;

    public:
        Game_Field();
    };

}

#endif
