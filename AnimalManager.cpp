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

	if (resourceListener != NULL) {
		bool buySuccess = resourceListener->onBuyAnimal(animal->getPriceBuy());
		if (buySuccess) {
			animals.push_back(animal);
		} else {
			cout << "Ban khong du tien de mua..." << endl;
		}
	}

}

void AnimalManager::sellAnimal(string type, string name) {
	bool sellSuccess = false;

	list<Animal*>::iterator i = animals.begin();
	while (i != animals.end()) {
		if ((*i)->getType() == type && (*i)->getName() == name) {
			animals.erase(i++);
			if (resourceListener != NULL) {
				resourceListener->onSellAnimal((*i)->getPriceSell());
				cout << "Ban vua ban thanh cong " << type << " voi ten " << name
						<< endl;
				sellSuccess = true;
			}
		} else {
			++i;
		}
	}

	if (!sellSuccess) {
		cout << "Khong tim thay " << type << " voi ten " << name << endl;
	}

}

void AnimalManager::sellAnimal(string type) {
	bool sellSuccess = false;

	list<Animal*>::iterator i = animals.begin();
	while (i != animals.end()) {
		if ((*i)->getType() == type) {
			if (resourceListener != NULL) {
				resourceListener->onSellAnimal((*i)->getPriceSell());
				sellSuccess = true;
			}
			animals.erase(i++);
		} else {
			++i;
		}
	}

	if (!sellSuccess) {
		cout << "Ban khong co con " << type << " nao de ban !\n";
	} else
		cout << "Ban thanh cong tat ca " << type << "\n";

}

void AnimalManager::setResourceListener(ResuorceManager *resource) {
	resourceListener = resource;
}

ostream& operator<<(ostream &os, AnimalManager &am) {
	os << "Animal manager: " << endl;
	list<Animal*>::iterator i = am.animals.begin();
	while (i != am.animals.end()) {
		os << "- " << (*i)->getName() << ": " << endl;
		os << "\t" << "Type: " << (*i)->getType() << endl;
		os << "\t" << "Age: " << (*i)->getAge() << " day" << endl;
		os << "\t" << "Sell price: " << (*i)->getPriceSell() << " USD" << endl;
		os << "\t" << "Weight: " << (*i)->getWeight() << " Klg" << endl;

		i++;
	}
	return os;
}

void AnimalManager::feedAnimals() {
	int sum = 0;
	list<Animal*>::iterator i = animals.begin();
	while (i != animals.end()) {
		sum += (*i)->getFoodUnit();
		i++;
	}
	bool feedSuccess = resourceListener->checkFood(sum);
	if (feedSuccess) {
		list<Animal*>::iterator i = animals.begin();
		while (i != animals.end()) {
			if ((*i)->getFoodUnit() != 0) {
				resourceListener->onFeedAnimal((*i)->getFoodUnit());
				(*i)->eat();
			}
			i++;
		}
		cout << "Da cho an xong !\n";
	} else {
		cout << "Khong du thuc an cho tat ca !\n";
	}

}

void AnimalManager::feedAnimalByType(string type) {
	int sum = 0;
	list<Animal*>::iterator i = animals.begin();
	while (i != animals.end()) {
		if ((*i)->getType() == type) {
			sum += (*i)->getFoodUnit();
		}
		i++;
	}
	bool feedSuccess = resourceListener->checkFood(sum);
	if (feedSuccess) {
		list<Animal*>::iterator i = animals.begin();
		while (i != animals.end()) {
			if ((*i)->getType() == type) {
				if ((*i)->getFoodUnit() != 0) {
					resourceListener->onFeedAnimal((*i)->getFoodUnit());
					(*i)->eat();
				}

			}
			i++;

		}
		cout << "Da cho con " << type << " an xong !\n";
	} else {
		cout << "Khong du thuc an cho tat ca " << type << " !\n";
	}

}

void AnimalManager::feedAnimalByName(string name) {
	int sum = 0;
	list<Animal*>::iterator i = animals.begin();
	while (i != animals.end()) {
		if ((*i)->getName() == name) {
			sum += (*i)->getFoodUnit();
		}
		i++;
	}
	bool feedSuccess = resourceListener->checkFood(sum);
	if (feedSuccess) {
		list<Animal*>::iterator i = animals.begin();
		while (i != animals.end()) {
			if ((*i)->getName() == name) {
				if ((*i)->getFoodUnit() != 0) {
					resourceListener->onFeedAnimal((*i)->getFoodUnit());
					(*i)->eat();
				}
				else {
					cout << name << " chua duoc an..." << endl;
				}

			}
			i++;

		}
	} else {
		cout << "Khong du thuc an cho " << name << " !\n";
	}
}
