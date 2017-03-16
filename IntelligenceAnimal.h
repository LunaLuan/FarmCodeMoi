/*
 * IntelligenceAnimal.h
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#ifndef INTELLIGENCEANIMAL_H_
#define INTELLIGENCEANIMAL_H_

#include "Animal.h"
#include "EmotionAnimal.h"

class IntelligenceAnimal: public EmotionAnimal {
public:
	IntelligenceAnimal();

	virtual void train() = 0;

	virtual void eat() = 0;
	virtual void goOut() = 0;
	virtual void goBack() = 0;
	virtual void die() = 0;
	virtual int reproduce() = 0;

	virtual void listen(Animal *a) = 0;
	virtual void onHourChange(int h) = 0;
	virtual void onDayChange(int d) = 0;

	virtual int getFoodUnit() = 0;

	virtual ~IntelligenceAnimal();

protected:
	int intelligenceIndex;
	virtual void printSound() = 0;
};

#endif /* INTELLIGENCEANIMAL_H_ */
