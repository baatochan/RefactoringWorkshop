//
// Created by a19stude on 4/19/19.
//

#ifndef REFACTORINGWORKSHOP_SNAKEWORLDI_HPP
#define REFACTORINGWORKSHOP_SNAKEWORLDI_HPP

#include <functional>

namespace Snake {

class Segments;

class WorldI {
public:
	virtual bool contains(Position position) const =0;
	virtual bool eatFood(Position position) const =0;

	virtual void updateFoodPosition(Position position, Segments const& segments) =0;
	virtual void placeFood(Position position, Segments const& segments) =0;

private:
	virtual void sendPlaceNewFood(Position position) =0;
	virtual void sendClearOldFood() =0;
	virtual void updateFoodPositionWithCleanPolicy(Position position, Segments const& segments, std::function<void()> clearPolicy) =0;
};

}

#endif //REFACTORINGWORKSHOP_SNAKEWORLDI_HPP
