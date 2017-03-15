/*
 * Chicken.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Chicken.h"

Chicken::Chicken() {
	setPriceSell(2);
	setPriceBuy(4);

}

void Chicken::eat() {

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

int Chicken::reproduce() {
	int r = rand() % 3;
	return r + 1;

}

Chicken::~Chicken() {
	// TODO Auto-generated destructor stub
}

void Chicken::printSound() {
	cout << "Bawk...";
}

void Chicken::listen() {
}
