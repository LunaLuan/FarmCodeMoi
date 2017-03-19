/*
 * Pig.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Pig.h"

Pig::Pig() {
	lifeTime = 22;
	type = "Pig";
	setPriceBuy(6);
}

void Pig::setPriceSell() {
	priceSell = weight;
}

void Pig::eat() {
	for (int i = 0; i < getFoodUnit(); i++) {
		sound();
	}
	weight++;
}

void Pig::goOut() {

}

void Pig::die() {
	sound();
	sound();
	sound();

	isDie = true;
	cout << name << "(" << type << ")" << " dead..." << endl;
}

list<Animal*> Pig::reproduce() {
	list<Animal*> children;
	if (age == 2 && weight >= 0.0) {
		int r = rand() % 2 + 1;
		cout << "Pig born " << r << " baby..." << endl;
		for (int i = 0; i < r; i++) {
			Pig *a = new Pig();
			a->setName("ChildOf" + name);
			a->setListener(this->listeners);

			a->sound();
			a->sound();
			children.push_back(a);
		}
	}
	return children;
}

Pig::~Pig() {
	// TODO Auto-generated destructor stub
}

void Pig::goBack() {
}

void Pig::listen(Animal *a) {

}

void Pig::onHourChange(int h) {
	if (h == 12) {
		sound();
	}
}

void Pig::onDayChange(int d) {
	if (isOut) {
		goBack();
	}

	age++;
	if (age == lifeTime) {
		die();
		return;
	}

	if (isEat) {
		eatDays++;
		if (eatDays == 1) {
			weight++;
			eatDays = 0;
		}
	} else {
		eatDays = 0;
	}
	isEat = false;

}

void Pig::printSound() {
	cout << "...Oink" << endl;
}

int Pig::getFoodUnit() {
	if (age < 2)
		return 0;
	else
		return 7;
}
