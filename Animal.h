/*
 * Animal.h
 *
 *  Created on: Mar 14, 2017
 *      Author: luan.ha
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>
#include <vector>
using namespace std;

class Animal {
public:
	Animal();

	string getName();
	void setName(string n);

	int getAge();
	void setAge(int a);

	float getWeight();
	void setWeight(float w);

	int getPriceSell();
	virtual void setPriceSell(int p);

	int getPriceBuy();
	virtual void setPriceBuy(int p);

	void sound();

	virtual void eat() = 0;
	virtual void goOut() = 0;
	virtual void goBack() = 0;
	virtual void die() = 0;
	virtual int reproduce() = 0;

	virtual void listen() = 0;
	void addListener(Animal *a);
	void removeListener(Animal *a);

	virtual ~Animal();

protected:
	/**
	 *	ten con vat...
	 **/
	string name;

	int age;
	float weight;

	int priceBuy;
	int priceSell;

	int soundCount;
	int eatCount;

	vector<class Animal*> listeners;

	virtual void printSound() = 0;
	void notifyListener();
};

#endif /* ANIMAL_H_ */
