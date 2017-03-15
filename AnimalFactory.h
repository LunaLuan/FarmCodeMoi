/*
 * AnimalFactory.h
 *
 *  Created on: Mar 15, 2017
 *      Author: luan.ha
 */

#ifndef ANIMALFACTORY_H_
#define ANIMALFACTORY_H_
#include <iostream>
#include "Dog.h"
#include "IntelligenceAnimal.h"

#include "Pig.h"
#include "Cat.h"
#include "Chicken.h"

using namespace std;

class AnimalFactory {
public:
	AnimalFactory();

	Animal* createAnimal(string type);

	virtual ~AnimalFactory();
};

#endif /* ANIMALFACTORY_H_ */
