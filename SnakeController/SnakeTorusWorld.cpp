//
// Created by a19stude on 4/19/19.
//

#include "SnakeTorusWorld.hpp"

namespace Snake {

TorusWorld::TorusWorld(IPort& displayPort, IPort& foodPort, Snake::Dimension dimension, Snake::Position food)
		: World(displayPort, foodPort, dimension, food) {

}

}
