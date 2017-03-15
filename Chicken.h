/*
 * Chicken.h
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#ifndef CHICKEN_H_
#define CHICKEN_H_

#include "EmotionAnimal.h"
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

	virtual void listen();

	virtual ~Chicken();

protected:
	virtual void printSound();
};

#endif /* CHICKEN_H_ */