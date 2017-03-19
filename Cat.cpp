/*
 * Cat.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Cat.h"

Cat::Cat() {
	lifeTime = 20;
	type = "Cat";
	setPriceSell(4);
	setPriceBuy(7);

}

void Cat::eat() {
	for (int i = 0; i < getFoodUnit(); i++) {
		sound();
	}
	isEat = true;
}

void Cat::goOut() {
	EmotionAnimal::goOut();
}

void Cat::goBack() {
	EmotionAnimal::goBack();
}

void Cat::die() {
	sound();
	sound();
	sound();

	isDie = true;
	cout << name << "(" << type << ")" << " dead..." << endl;
}

list<Animal*> Cat::reproduce() {
	list<Animal*> children;
	if (age == 18 && weight == 4.0 && happyIndex == 10) {
		int r = 1;
		cout << "Cat born baby...";
		for (int i = 0; i < r; i++) {
			Cat *a = new Cat();
			a->setName("ChildOf" + name);
			a->setListener(this->listeners);

			a->sound();
			a->sound();
			children.push_back(a);
		}
	}
	return children;
}

Cat::~Cat() {
	// TODO Auto-generated destructor stub
}

void Cat::listen(Animal *a) {
	bool isDog = dynamic_cast<Dog*>(a);
	bool isChicken = dynamic_cast<Chicken*>(a);

	if (isDog || isChicken) {
		soundCount++;
		if (soundCount == 15) {
			cout << "Cat reduce happy index...";
			if(happyIndex > 0)
				happyIndex--;
		}
	}
}

void Cat::onHourChange(int h) {
	if (h == 1) {
		sound();
	}
}

void Cat::onDayChange(int d) {
	EmotionAnimal::onDayChange(d);

	age++;

	soundCount = 0;
	if (age == lifeTime) {
		die();
		return;
	}

	if (isEat) {
		eatDays++;
		if (eatDays == 3) {
			weight++;
			eatDays = 0;
		}
	} else {
		eatDays = 0;
	}
	isEat = false;


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
