/*
 * ResuorceManager.h
 *
 *  Created on: Mar 15, 2017
 *      Author: luan.ha
 */

#ifndef RESUORCEMANAGER_H_
#define RESUORCEMANAGER_H_

#include<iostream>
using namespace std;

class ResuorceManager {
public:
	ResuorceManager();

	void buyFood(int m);
	void onBuyAnimal(int price);
	void onSellAnimal(int price);
	void onFeedAnimal(int foodCount);

	virtual ~ResuorceManager();

protected:
	int food,money;


};



#endif /* RESUORCEMANAGER_H_ */
