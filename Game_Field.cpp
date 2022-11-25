#include "Game_Field.h"

namespace td {

    Line::Line(int size) {
        line = std::vector<Tile>(size);
    }

    Game_Field::Game_Field() {
        height = config::GLOBAL_CONST_HEIGHT;
        width = config::GLOBAL_CONST_WIDTH;
        game_field = std::vector<Line>(config::GLOBAL_CONST_WIDTH, Line(width));
        enemies = std::list<std::unique_ptr<Enemy>>();
        castle = std::make_unique<Castle>();
    }

}