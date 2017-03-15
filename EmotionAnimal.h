/*
 * EmotionAnimal.h
 *
 *  Created on: Mar 15, 2017
 *      Author: luan.ha
 */

#ifndef EMOTIONANIMAL_H_
#define EMOTIONANIMAL_H_

#include "Animal.h"

class EmotionAnimal: public Animal {
public:
	EmotionAnimal();

	int getHappyIndex();
	void setHappyIndex(int i);

	virtual void eat() = 0;
	virtual void goOut() = 0;
	virtual void goBack() = 0;
	virtual void die() = 0;
	virtual int reproduce() = 0;

	virtual void listen() = 0;

	virtual ~EmotionAnimal();

protected:
	int happyIndex;
	virtual void printSound() = 0;
};

#endif /* EMOTIONANIMAL_H_ */
