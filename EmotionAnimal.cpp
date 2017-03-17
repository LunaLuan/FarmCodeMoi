/*
 * EmotionAnimal.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: luan.ha
 */

#include "EmotionAnimal.h"

EmotionAnimal::EmotionAnimal() {
	happyIndex = 7;
	sadDays = 0;
}

int EmotionAnimal::getHappyIndex() {
	return happyIndex;
}

void EmotionAnimal::setHappyIndex(int i) {
	happyIndex = i;
}

void EmotionAnimal::onHourChange(int h)
{
}

void EmotionAnimal::onDayChange(int d)
{
}

EmotionAnimal::~EmotionAnimal() {
	// TODO Auto-generated destructor stub
}

bool EmotionAnimal::dieBecauseSad() {
	if(happyIndex == 0) {
		sadDays ++;
	}
	else {
		sadDays = 0;
	}

	if(sadDays == 3) {
		die();
		return true;
	}
	else
		return false;
}
