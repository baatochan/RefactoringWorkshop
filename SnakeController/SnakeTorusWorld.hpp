//
// Created by a19stude on 4/19/19.
//

#ifndef REFACTORINGWORKSHOP_SNAKETORUSWORLD_HPP
#define REFACTORINGWORKSHOP_SNAKETORUSWORLD_HPP

#include "SnakeWorld.hpp"

namespace Snake {

class TorusWorld : public World {
public:
	TorusWorld(IPort& displayPort, IPort& foodPort, Dimension dimension, Position food);
};

}
#endif //REFACTORINGWORKSHOP_SNAKETORUSWORLD_HPP
