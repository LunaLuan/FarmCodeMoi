/*
 * Chicken.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Chicken.h"

Chicken::Chicken() {
	type = "Chicken";
	setPriceSell(2);
	setPriceBuy(4);

}

void Chicken::eat() {
	for (int i = 0; i < getFoodUnit(); i++) {
		sound();
	}
	eatDays++;
	if (eatDays == 2) {
		weight += 0.2;
		eatDays = 0;
	}

}

void Chicken::goOut() {

}

void Chicken::goBack() {

}

void Chicken::die() {
	int d = 4;
	for (int i = 0; i < d; i++) {
		sound();
	}
}

list<Animal*> Chicken::reproduce() {
	list<Animal*> children;
	if (age == 13 && weight == 2.0 && happyIndex == 10) {
		int r = rand() % 3;
		cout << "Chicken moi de con...";
		for (int i = 0; i < r; i++) {
			Chicken *a = new Chicken();
			a->setName("ChildOf" + name);
			a->sound();a->sound();a->sound();
			children.push_back(a);
		}
	}
	return children;


}

void Chicken::onHourChange(int h) {
	//cout << "Hour:  " << h;
	if (h == 6) {
		sound();
	}
}

void Chicken::onDayChange(int d) {
	removeDieListener();
	age++;
	soundCount = 0;
}

Chicken::~Chicken() {
	// TODO Auto-generated destructor stub
}

void Chicken::printSound() {
	cout << "...Bawk" << endl;
}

void Chicken::listen(Animal *a) {
	if (dynamic_cast<Cat*>(a)) {
		soundCount++;
	}
	if (dynamic_cast<Dog*>(a)) {
		soundCount++;
	}
	if (dynamic_cast<Pig*>(a)) {
		soundCount++;
	}

	if (soundCount == 4) {
		cout << "Ga dang buc minh vi cac con vat khac...\n";
		happyIndex--;
	}
}

int Chicken::getFoodUnit() {
	return 1;
}
