/*
 * Pig.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#include "Pig.h"

Pig::Pig() {
	setPriceBuy(6);
}

void Pig::setPriceSell() {
	priceSell = weight;
}

void Pig::eat() {

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

void Pig::printSound() {
	cout << "...Oink!" << endl;
}

