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
	soundCount = 0;
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

void Animal::removeListener(Animal *a) {


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


void Animal::notifyListener() {
	int size = listeners.size();
	for (int i = 0; i < size; i++) {
		listeners[i]->listen(this);
	}
}

Animal::~Animal() {
	// TODO Auto-generated destructor stub
}

