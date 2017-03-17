/*
 * Pig.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Pig.h"

Pig::Pig() {
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
}

list<Animal*> Pig::reproduce() {
	list<Animal*> children;
	if (age == 2 && weight >= 0.0) {
		int r = rand() % 2 + 1;
		cout << "Pig moi de"<< r <<" con...";
		for (int i = 0; i < r; i++) {
			Pig *a = new Pig();
			a->setName("ChildOf" + name);
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
	removeDieListener();
	age++;
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
