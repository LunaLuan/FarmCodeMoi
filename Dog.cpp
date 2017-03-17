/*
 * Dog.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Dog.h"

Dog::Dog() {
	lifeTime = 25;
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
	isEat = true;
}

void Dog::goOut() {
	int currentHour = TimeManager::getInstance()->getGHour();
	if(currentHour > 4 && currentHour <23) {
		isOut = true;
	}
	else
		cout << "Cho khong ra ngoai vao gio nay...";
}

void Dog::goBack() {

}

void Dog::die() {
	sound();
	sound();

}

list<Animal*> Dog::reproduce() {
	list<Animal*> children;
	if (age == 22 && weight == 7.0 && happyIndex == 10
			&& intelligenceIndex == 10) {
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
		cout << "Dog reduce happy index...\n";
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
	if (age == lifeTime) {
		die();
	}

	if (isEat) {
		eatDays++;
		if (eatDays == 2) {
			weight++;
			eatDays = 0;
		}
	} else {
		eatDays = 0;
	}
	isEat = false;
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
