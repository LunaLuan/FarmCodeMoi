/*
 * Animal.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Animal.h"

Animal::Animal() {
	TimeManager::getInstance()->addTimeObsever(this);
	age = 0;
	weight = 0.0;
	soundCount = 0;

	eatDays = 0;

	isDie = false;
	isOut = false;
	isEat = false;
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

void Animal::addListener(Animal *a) {
	listeners.push_back(a);
}

void Animal::removeDieListener() {
	list<Animal*>::iterator iterator = listeners.begin();
	while(iterator != listeners.end()) {
		if((*iterator)->isDie) {
			listeners.erase(iterator++);
		}
		else {
			++iterator;
		}
	}
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

void Animal::notifyListener() {
	list<Animal*>::iterator i = listeners.begin();
	while(i != listeners.end()) {
		(*i)->listen(this);
		i++;
	}
}

Animal::~Animal() {
	// TODO Auto-generated destructor stub
}

