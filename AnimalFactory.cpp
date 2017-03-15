/*
 * AnimalFactory.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: luan.ha
 */

#include "AnimalFactory.h"

AnimalFactory::AnimalFactory() {
	// TODO Auto-generated constructor stub

}

Animal* AnimalFactory::createAnimal(string type) {
	if (type == "Dog") {
		return new Dog();
	} else if (type == "Pig") {
		return new Pig();
	} else if (type == "Cat") {
		return new Cat();
	} else if (type == "Chicken") {
		return new Chicken();
	}

	return NULL;
}

AnimalFactory::~AnimalFactory() {
	// TODO Auto-generated destructor stub
}

