/*
 * Cat.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Cat.h"

Cat::Cat() {
	type = "Cat";
	setPriceSell(4);
	setPriceBuy(7);

}

void Cat::eat() {
	for (int i = 0; i < getFoodUnit(); i++) {
		sound();
	}
	eatDays++;
	if (eatDays == 3) {
		weight++;
		eatDays = 0;
	}

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

void Cat::listen(Animal *a) {
	if(dynamic_cast<Dog*>(a)) {
		soundCount++;
	}
	if(dynamic_cast<Chicken*>(a)) {
		soundCount++;
	}

	if(soundCount == 15) {
		cout << "Meo dang buc minh vi cac con vat khac...";
		happyIndex--;
	}
}

void Cat::onHourChange(int h) {
	if (h == 1) {
		sound();
	}
}

void Cat::onDayChange(int d) {
	age ++;
	soundCount++;
}

void Cat::printSound() {
	cout << "...Meow" << endl;
}

int Cat::getFoodUnit() {
	if (age < 2)
		return 0;
	else
		return 2;
}
