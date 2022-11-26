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

    bool Game_Field::next_step() {
        if(check_game_status())
            return false;
        check_castle();
        check_given_damage();
    }

    bool Game_Field::check_game_status() const {
        return game_status;
    }

    void Game_Field::check_castle() {
        for( auto &enemy: enemies){
            if(enemy->get_x() < 30){
                castle->get_damage(enemy->get_castle_damage());
                enemy->kill();
            }
        }
    }

    void Game_Field::check_given_damage() {
        for(auto &line : game_field){
            for(auto &tile : line.line){
                if(tile.get_building() == nullptr)
                    continue;
                else {
                    for (auto &enemy : enemies) {
                        //tile.get_building()->check_enemy(enemy);
                    }
                }
            }
        }
    }

}