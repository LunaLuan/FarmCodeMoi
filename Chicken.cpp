/*
 * Chicken.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Chicken.h"

Chicken::Chicken() {
	lifeTime = 15;
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
	Animal::goOut();
	cout << name << " da duoc phep ra ngoai\n";

}

void Chicken::goBack() {
	Animal::goBack();

}

void Chicken::die() {
	int d = 4;
	for (int i = 0; i < d; i++) {
		sound();
	}

	isDie = true;
	cout << name << "(" << type << ")" << " dead..." << endl;
}

list<Animal*> Chicken::reproduce() {
	list<Animal*> children;
	if (age == 13 && weight == 2.0 && happyIndex == 10) {
		int r = rand() % 3;
		cout << "Chicken born baby...";
		for (int i = 0; i < r; i++) {
			Chicken *a = new Chicken();
			a->setName("ChildOf" + name);
			a->setListener(this->listeners);

			a->sound();
			a->sound();
			a->sound();
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
	EmotionAnimal::onDayChange(d);
	if(isOut) {
		goBack();
	}


	age++;
	soundCount = 0;
	if (age == lifeTime) {
		die();
	}
	if (isEat) {
		eatDays++;
		if (eatDays == 2) {
			weight += 0.2;
			eatDays = 0;
		}
	} else {
		eatDays = 0;
	}
	isEat = false;

}

Chicken::~Chicken() {
	// TODO Auto-generated destructor stub
}

void Chicken::printSound() {
	cout << "...Bawk" << endl;
}

void Chicken::listen(Animal *a) {
	bool isCat = dynamic_cast<Cat*>(a);
	bool isDog = dynamic_cast<Dog*>(a);
	bool isPig = dynamic_cast<Pig*>(a);

	if (isCat || isDog || isPig) {
		soundCount++;
		if (soundCount == 10) {
			cout << "Chicken reduce happy index...\n";
			if(happyIndex > 0)
				happyIndex--;
		}
	}
}

int Chicken::getFoodUnit() {
	return 1;
}
