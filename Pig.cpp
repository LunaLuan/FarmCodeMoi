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
	for (int i = 0; i < getFoodUnit() ; i++) {
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

int Pig::reproduce() {
	int r = rand() % 2;
	return r + 1;
}

Pig::~Pig() {
	// TODO Auto-generated destructor stub
}

void Pig::goBack() {
}

void Pig::listen() {

}

void Pig::onHourChange(int h) {
	if (h == 12) {
		sound();
	}
}

void Pig::onDayChange(int d) {
	age++;

}

void Pig::printSound() {
	cout << "...Oink!" << endl;
}

int Pig::getFoodUnit() {
	if (age < 2)
		return 0;
	else
		return 7;
}
