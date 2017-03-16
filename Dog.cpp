/*
 * Dog.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Dog.h"

Dog::Dog() {
	type = "Dog";
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
	for (int i = 0; i < getFoodUnit(); i++) {
		sound();
	}
	eatDays++;
	if (eatDays == 2) {
		weight++;
		eatDays = 0;
	}
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

void Dog::onHourChange(int h) {
	if (h == 20) {
		sound();
	}
}
void Dog::onDayChange(int d) {

}

void Dog::printSound() {
	cout << "...Woof" << endl;
}

int Dog::getFoodUnit() {
	if (age < 3)
		return 0;
	else
		return 3;
}
