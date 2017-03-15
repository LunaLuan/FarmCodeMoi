/*
 * AnimalManager.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: luan.ha
 */

#include "AnimalManager.h"

AnimalManager::AnimalManager() {
	resourceListener = new ResuorceManager();
}

AnimalManager::~AnimalManager() {
	// delete resourceListener;
	resourceListener = NULL;
}

void AnimalManager::buyAnimal(string type, string name) {
	AnimalFactory factory;
	Animal *animal = factory.createAnimal(type);
	animal->setName(name);

	// animals.push_back(animal);
	if(resourceListener != NULL)
		resourceListener->onBuyAnimal(animal->getPriceBuy());
}

void AnimalManager::sellAnimal(string type, string name) {


}

void AnimalManager::sellAnimal(string type) {
}

void AnimalManager::setResourceListener(ResuorceManager *resource) {
	resourceListener = resource;
}
