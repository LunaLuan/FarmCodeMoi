/*
 * Dog.h
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#ifndef DOG_H_
#define DOG_H_

#include "EmotionAnimal.h"
#include "IntelligenceAnimal.h"
#include "Cat.h"
#include <iostream>
#include <cstdlib>
using namespace std;

class Dog: public IntelligenceAnimal {
public:
	Dog();

	virtual void train();

	virtual void eat();
	virtual void goOut();
	virtual void goBack();
	virtual void die();
	virtual list<Animal*> reproduce();
	virtual int getFoodUnit();
	virtual void listen(Animal *a);

	virtual void onHourChange(int h);
	virtual void onDayChange(int d);
	virtual ~Dog();

protected:
	virtual void printSound();
};

#endif /* DOG_H_ */
