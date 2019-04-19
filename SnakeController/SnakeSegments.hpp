#pragma once

#include <list>

#include "SnakeInterface.hpp"
#include "SnakePosition.hpp"

class IPort;

namespace Snake
{
class WorldI;

class Segments
{
public:
    Segments(IPort& displayPort, IPort& scorePort, Direction direction);

    void nextStep(WorldI const& world);

    void addSegment(Position position);
    void updateDirection(Direction newDirection);

    bool isCollision(Position position) const;

private:
    IPort& m_displayPort;
    IPort& m_scorePort;

    void addHead(Position position);
    Position removeTail();
    Position nextHead() const;

    Direction m_headDirection;
    std::list<Position> m_segments;

    void removeTailSegment();
    void addHeadSegment(Position position);
    void removeTailSegmentIfNotScored(Position position, WorldI const& world);
    void updateSegments(Position position, WorldI const& world);
};

} // namespace Snake

