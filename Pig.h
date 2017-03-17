/*
 * Pig.h
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#ifndef PIG_H_
#define PIG_H_

#include "Animal.h"
#include <iostream>
#include <cstdlib>
using namespace std;

class Pig: public Animal {
public:
	Pig();

	virtual void setPriceSell();

	virtual void eat();
	virtual void goOut();
	virtual void goBack();
	virtual void die();
	virtual list<Animal*> reproduce();
	virtual void listen(Animal *a);
	virtual int getFoodUnit();

	virtual void onHourChange(int h);
	virtual void onDayChange(int d);

	virtual ~Pig();

protected:
	virtual void printSound();
};

#endif /* PIG_H_ */
