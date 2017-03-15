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
	virtual int reproduce();

	virtual void listen();

	virtual ~Dog();

protected:
	virtual void printSound();
};

#endif /* DOG_H_ */
