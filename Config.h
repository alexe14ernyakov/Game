#ifndef GAME_CONFIG_H
#define GAME_CONFIG_H

namespace config{

    ///   GAME FIELD
    const int GLOBAL_CONST_HEIGHT = 6;
    const int GLOBAL_CONST_WIDTH = 9;


    ///   CASTLE
    const int   GLOBAL_CONST_MAX_CASTLE_LEVEL = 5;
    const float GLOBAL_CONST_MAX_CASTLE_HEALTH = 500.0f;
    const float GLOBAL_CONST_CASTLE_YIELD = 3.0f;
    const float GLOBAL_CONST_CASTLE_REGENERATION_SPEED = 0.5f;
    const int   GLOBAL_CONST_CASTLE_UPGRADE_PRICE = 300;


    /// LIGHT INFANTRY
    const float GLOBAL_CONST_LIGHT_INFANTRY_MAX_HEALTH = 50.0f;
    const float GLOBAL_CONST_LIGHT_INFANTRY_REGENERATION_SPEED = 1.0f;
    const float GLOBAL_CONST_LIGHT_INFANTRY_MOVE_SPEED = 20.0f;
    const float GLOBAL_CONST_LIGHT_INFANTRY_CASTLE_DAMAGE = 0.5f;
    const float GLOBAL_CONST_LIGHT_INFANTRY_DODGE_CHANCE = 0.3f;


    /// LIGHT INFANTRY
    const float GLOBAL_CONST_HEAVY_INFANTRY_MAX_HEALTH = 150.0f;
    const float GLOBAL_CONST_HEAVY_INFANTRY_REGENERATION_SPEED = 2.0f;
    const float GLOBAL_CONST_HEAVY_INFANTRY_MOVE_SPEED = 5.0f;
    const float GLOBAL_CONST_HEAVY_INFANTRY_CASTLE_DAMAGE = 0.7f;
    const float GLOBAL_CONST_HEAVY_INFANTRY_FIRING_RANGE = 30.0f;
    const float GLOBAL_CONST_HEAVY_INFANTRY_DAMAGE = 20.0f;

}

#endif
