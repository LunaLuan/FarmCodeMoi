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

	bool buyFood(int m);
	bool onBuyAnimal(int price);
	bool onSellAnimal(int price);
	bool onFeedAnimal(int foodCount);
	bool checkFood(int f);

	friend ostream& operator<<(ostream& os, ResuorceManager &r);

	virtual ~ResuorceManager();

protected:
	int food,money;


};



#endif /* RESUORCEMANAGER_H_ */
