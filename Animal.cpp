/*
 * Animal.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Animal.h"

Animal::Animal() {
	age = 0;
	weight = 0.0;
	soundCount = 0;

	eatDays = 0;

	isDie = false;
	isEat = false;

	isOut = false;
	isGoOutInDay = false;
}

string Animal::getName() {
	return name;
}

void Animal::setName(string n) {
	name = n;
}

int Animal::getAge() {
	return age;
}

void Animal::setAge(int a) {
	age = a;
}

float Animal::getWeight() {
	return weight;
}

void Animal::setWeight(float w) {
	weight = w;
}

void Animal::sound() {
	printSound();
	notifyListener();
}

void Animal::setListener(list<Animal*> *l) {
	listeners = l;
}

int Animal::getPriceSell() {
	return priceSell;
}

void Animal::setPriceSell(int p) {
	priceSell = p;
}

int Animal::getPriceBuy() {
	return priceBuy;
}

void Animal::setPriceBuy(int p) {
	priceBuy = p;
}

string Animal::getType() {
	return type;
}

bool Animal::getDie() {
	return isDie;
}

void Animal::goOut() {
	if (isGoOutInDay) {
		cout << name << " da ra ngoai hom nay...\n";
	} else {
		isOut = true;
		isGoOutInDay = true;
		cout << name << " da ra ngoai choi...\n";
	}
}

void Animal::goBack() {
	isOut = false;
	isGoOutInDay =false;
	cout << type << " da tro ve...\n";
}

bool Animal::isGoOut() {
	return isOut;
}

void Animal::notifyListener() {
	list<Animal*>::iterator i = (*listeners).begin();
	while (i != (*listeners).end()) {
		if (!(*i)->isOut) {
			(*i)->listen(this);
		}
		i++;
	}
}

Animal::~Animal() {
	// TODO Auto-generated destructor stub
}

