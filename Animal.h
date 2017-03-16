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
#include "TimeManager.h"
#include"TimeObserver.h"
using namespace std;

class Animal: public TimeObserver {
public:
	Animal();

	string getName();
	void setName(string n);

	string getType();

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

	virtual int getFoodUnit() = 0;

	virtual void listen(Animal *a) = 0;
	void addListener(Animal *a);
	void removeListener(Animal *a);

	virtual void onHourChange(int h) = 0;
	virtual void onDayChange(int d) = 0;

	virtual ~Animal();

protected:
	/**
	 *	ten con vat...
	 **/
	string name;
	string type;

	int age;
	float weight;

	int priceBuy;
	int priceSell;

	int soundCount;
	int eatDays;
	int foodUnit;

	vector<Animal*> listeners;

	virtual void printSound() = 0;
	void notifyListener();
};

#endif /* ANIMAL_H_ */
