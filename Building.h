#ifndef GAME_BUILDING_H
#define GAME_BUILDING_H

namespace td {

    class Building {
    protected:
        float x;
        float y;

    public:
        [[nodiscard]] float get_x() const;
        [[nodiscard]] float get_y() const;
    };

}

#endif
