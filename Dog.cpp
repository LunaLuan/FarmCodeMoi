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

list<Animal*> Dog::reproduce() {
	list<Animal*> children;
	if (age == 22 && weight == 7.0 && happyIndex == 10 && intelligenceIndex == 10) {
		int r = rand() % 3;
		cout << "Dog moi de con...";
		for (int i = 0; i < r; i++) {
			Dog *a = new Dog();
			a->setName("ChildOf" + name);
			a->sound();
			children.push_back(a);
		}
	}
	return children;
}

Dog::~Dog() {
	// TODO Auto-generated destructor stub
}

void Dog::listen(Animal *a) {
	if (dynamic_cast<Cat*>(a)) {
		soundCount++;
	}
	if (soundCount == 5) {
		cout << "Cho dang buc minh vi cac con vat khac...\n";
		happyIndex--;
	}
}

void Dog::onHourChange(int h) {
	if (h == 20) {
		sound();
	}
}
void Dog::onDayChange(int d) {
	removeDieListener();
	age++;
	soundCount = 0;
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
