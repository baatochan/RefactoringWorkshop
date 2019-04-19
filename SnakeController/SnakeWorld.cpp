#include "SnakeWorld.hpp"

namespace Snake
{

World::World(Dimension dimension, Position food)
    : m_foodPosition(food),
      m_dimension(dimension)
{}

void World::setFoodPosition(Position position)
{
    m_foodPosition = position;
}

Position World::getFoodPosition() const
{
    return m_foodPosition;
}

bool World::contains(Position position) const
{
    return position.x >= 0 and position.x < m_dimension.width and position.y >= 0 and position.y < m_dimension.height;
}

} // namespace Snake
