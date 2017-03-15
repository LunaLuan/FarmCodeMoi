
#include<iostream>

#include "AnimalManager.h"
#include "ResuorceManager.h"


using namespace std;

int main() {
	AnimalManager animalManager;
	ResuorceManager resourceManager;

	Dog d;
	d.sound();

	ResuorceManager *p = &resourceManager;
	animalManager.setResourceListener(p);


	animalManager.buyAnimal("Dog", "Tuan Anh");

	cout << "Hello";
	return 0;
}

