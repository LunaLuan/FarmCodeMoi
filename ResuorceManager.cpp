/*
 * ResuorceManager.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: luan.ha
 */

#include "ResuorceManager.h"

ResuorceManager::ResuorceManager() {

	food = 50;
	money = 20;

}

void ResuorceManager::buyFood(int m) {
	food = food + m * 10;
	money = money - m;
}

void ResuorceManager::onBuyAnimal(int price) {
	cout << money << endl;
	money = money - price;
	cout << money << endl;
}

void ResuorceManager::onSellAnimal(int price) {
	money = money + price;
}

void ResuorceManager::onFeedAnimal(int foodCount) {
	food -= foodCount;
}

ResuorceManager::~ResuorceManager() {

}

