/*
 * Cat.h
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#ifndef CAT_H_
#define CAT_H_

#include "EmotionAnimal.h"

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

	virtual void listen();

	virtual ~Cat();

protected:
	virtual void printSound();
};

#endif /* CAT_H_ */
