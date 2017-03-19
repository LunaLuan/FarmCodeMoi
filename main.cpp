#include<iostream>
#include <conio.h>
#include "MacDonald.h"
#include "Animal.h"
#include "TimeManager.h"
#include <fstream>

using namespace std;

int main() {
	// freopen("output.txt", "w", stdout);

	AnimalManager am;
	ResuorceManager rm;
	am.setResourceListener(&rm);

	string command;
	while (true) {
		if (_kbhit()) {
			char c;
			c = getch();
			cout << c;

			if (c == '\\') {
				cout << "\n>>Ban vua nhap command: " << command << endl;
				if (command == "d") {
					TimeManager::getInstance()->jumpToNextDay();
				}
				if(command == "ra") {
					cout << am;
					cout << rm;
				}
				if(command == "bdb") {
					am.buyAnimal("Dog", "b");
				}
				if(command == "bcd") {
					am.buyAnimal("Chicken" , "a");
				}
				if(command == "lca") {
					am.letAnimals(true);
				}


				command = "";
			} else {
				command += c;
			}

		}
		TimeManager::getInstance()->covertTime();

	}

	return 0;
}

void testCase1() {
	freopen("output.txt", "w", stdout);

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
}

