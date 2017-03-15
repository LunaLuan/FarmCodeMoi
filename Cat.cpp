/*
 * Cat.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Cat.h"

Cat::Cat() {
	setPriceSell(4);
	setPriceBuy(7);

}

void Cat::eat() {

}

void Cat::goOut() {

}

void Cat::goBack() {

}

void Cat::die() {
	sound();
	sound();
	sound();
}

int Cat::reproduce() {
	return 1;
}

Cat::~Cat() {
	// TODO Auto-generated destructor stub
}

void Cat::listen() {
}

void Cat::printSound() {
	cout << "Meow..." << endl;
}

