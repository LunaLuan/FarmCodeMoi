/*
 * AnimalManager.h
 *
 *  Created on: Mar 15, 2017
 *      Author: luan.ha
 */

#ifndef ANIMALMANAGER_H_
#define ANIMALMANAGER_H_

#include "Animal.h"
#include "ResuorceManager.h"
#include "AnimalFactory.h"
#include <iostream>
#include <list>
#include <typeinfo>

using namespace std;

class AnimalManager {
public:
	AnimalManager();


	void buyAnimal(string type, string name);
	void sellAnimal(string type, string name);
	void sellAnimal(string type);

	void feedAnimals();
	void feedAnimalByType(string type);
	void feedAnimalByName(string name);

	void setResourceListener(ResuorceManager *resource);

	friend ostream& operator<<(ostream &os, AnimalManager &am);
	virtual ~AnimalManager();
protected:
	ResuorceManager *resourceListener;
	list<Animal *> animals;
};

#endif /* ANIMALMANAGER_H_ */
