/*
 * Dog.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Dog.h"

Dog::Dog() {
	setPriceBuy(8);
	setPriceSell(5);
}

void Dog::train() {
	intelligenceIndex += 2;
	if (intelligenceIndex >= 10) {
		setPriceSell(10);
	} else {
		setPriceSell(5);
	}
}

void Dog::eat() {

}

void Dog::goOut() {

}

void Dog::goBack() {

}

void Dog::die() {
	sound();
	sound();

}

int Dog::reproduce() {
	return 1;
}

Dog::~Dog() {
	// TODO Auto-generated destructor stub
}

void Dog::listen() {
}

void Dog::printSound() {
	cout << "...Woof" << endl;
}

