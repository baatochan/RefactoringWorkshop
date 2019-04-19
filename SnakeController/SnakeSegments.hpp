#pragma once

#include <list>

#include "SnakeInterface.hpp"

namespace Snake
{

class Segments
{
    struct Position
    {
        int x, y;
    };
public:
    Segments(Direction direction);

    void addSegment(Position position);
    bool isCollision(Position position) const;
    void addHead(Position position);
    std::pair<int, int> nextHead() const;
    std::pair<int, int> removeTail();
    void updateDirection(Direction newDirection);
private:
    Direction m_headDirection;
    std::list<Position> m_segments;
};

} // namespace Snake
