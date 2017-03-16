/*
 * Cat.h
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#ifndef CAT_H_
#define CAT_H_

#include "EmotionAnimal.h"
#include "Dog.h"
#include "Chicken.h"

#include<iostream>
using namespace std;

class Cat: public EmotionAnimal {
public:
	Cat();

	virtual void eat();
	virtual void goOut();
	virtual void goBack();
	virtual void die();
	virtual int reproduce();
	virtual int getFoodUnit();
	virtual void listen(Animal *a);
	virtual void onHourChange(int h);
	virtual void onDayChange(int d);

	virtual ~Cat();

protected:
	virtual void printSound();
};

#endif /* CAT_H_ */
