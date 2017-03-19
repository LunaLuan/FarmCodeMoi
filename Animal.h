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
#include <list>

#include "TimeManager.h"
#include "TimeObserver.h"
using namespace std;

class Animal: public TimeObserver {
public:
	Animal();

	bool getDie();

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

	virtual void goOut();
	virtual void goBack();

	virtual void die() = 0;

	virtual list<Animal*> reproduce() = 0;

	virtual int getFoodUnit() = 0;

	virtual void listen(Animal *a) = 0;
	void setListener(list<Animal*> *l);

	virtual void onHourChange(int h) = 0;
	virtual void onDayChange(int d) = 0;

	bool isGoOut();

	virtual ~Animal();

protected:
	/**
	 *	name of animal (examples: Thomas...)
	 **/
	string name;

	/**
	 * type of animal (examples: Dog, Chicken, Frog...)
	 */
	string type;

	/**
	 * age of animal
	 */
	int age;
	float weight;

	int priceBuy;
	int priceSell;

	int soundCount;
	int eatDays;
	int foodUnit;

	bool isDie;

	bool isEat;
	int lifeTime;

	bool isOut;
	bool isGoOutInDay;

	list<Animal*> *listeners;

	virtual void printSound() = 0;
	void notifyListener();

};

#endif /* ANIMAL_H_ */
