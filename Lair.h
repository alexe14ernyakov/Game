#ifndef GAME_LAIR_H
#define GAME_LAIR_H
#include "Building.h"

namespace td {

    enum EnemyType{
        LightInfantry,
        HeavyInfantry,
        Aviation
    };

    class Lair : Building {
    private:
        float     spawn_speed;
        EnemyType spawn_type;

    public:
        void check_enemy(std::unique_ptr<Enemy> enemy) override;
    };

}

#endif
