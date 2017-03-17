#include<iostream>
#include <conio.h>
#include "MacDonald.h"
#include "Animal.h"
#include "TimeManager.h"

using namespace std;

int main() {
	AnimalManager am;

	am.buyAnimal("Dog", "Dog1");

	am.buyAnimal("Chicken", "Chicken1");

	am.buyAnimal("Cat", "Cat1");
	am.buyAnimal("Cat", "Cat2");
	am.buyAnimal("Cat", "Cat3");
	am.buyAnimal("Cat", "Cat4");
	am.buyAnimal("Cat", "Cat5");
	am.buyAnimal("Cat", "Cat6");

	am.buyAnimal("Pig", "Pig1");

	while (true) {
		if(_kbhit()) {
			string command;
			char c;
			c= getch();
			cout << c;

			command += c;
			if(c == '\\')
				cout << ">>Day la command";

			if(command == "d") {
				TimeManager::getInstance()->jumpToNextDay();
			}

		}
		TimeManager::getInstance()->covertTime();


	}

	return 0;
}

