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
#include <vector>

using namespace std;

class AnimalManager {
public:
	AnimalManager();
	void buyAnimal(string type, string name);
	void sellAnimal(string type, string name);
	void sellAnimal(string type);
	void setResourceListener(ResuorceManager *resource);
	virtual ~AnimalManager();
protected:
	ResuorceManager *resourceListener;
	// vector<class Animal *> animals;
};

#endif /* ANIMALMANAGER_H_ */
