/*
 * Chicken.h
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#ifndef CHICKEN_H_
#define CHICKEN_H_

#include "EmotionAnimal.h"
#include "Cat.h"
#include "Dog.h"
#include "Pig.h"

#include <iostream>
#include <cstdlib>
using namespace std;

class Chicken: public EmotionAnimal {
public:
	Chicken();

	virtual void eat();
	virtual void goOut();
	virtual void goBack();
	virtual void die();
	virtual int reproduce();
	virtual void onHourChange(int h);
	virtual void onDayChange(int d);
	virtual void listen(Animal *a);
	virtual int getFoodUnit();

	virtual ~Chicken();

protected:
	virtual void printSound();
};

#endif /* CHICKEN_H_ */
