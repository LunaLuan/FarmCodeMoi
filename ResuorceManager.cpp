/*
 * ResuorceManager.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: luan.ha
 */

#include "ResuorceManager.h"

ResuorceManager::ResuorceManager() {

	food = 50;
	money = 50;

}

bool ResuorceManager::buyFood(int m) {
	if(money>=m){
		food = food + m * 10;
		money = money - m;
		return true;
	}
	return false;
}

bool ResuorceManager::onBuyAnimal(int price) {
	if(money>=price){
		money = money - price;
		return true;

	}return false;

}

bool ResuorceManager::onSellAnimal(int price) {
	money = money + price;
	return true;
}

bool ResuorceManager::onFeedAnimal(int foodCount) {
	if(food>=foodCount){
		food -= foodCount;
		return true;
	}return false;


}

ostream& operator<<(ostream& os, ResuorceManager &r) {
	os<< "Resource manager: " <<endl;
	os<< "\t - Food: " << r.food <<endl;
	os << "\t - Money: "<< r.money <<endl;

	return os;
}


ResuorceManager::~ResuorceManager() {

}

bool ResuorceManager::checkFood(int f) {
	if(f<= food) return true;
	else return false;
}
