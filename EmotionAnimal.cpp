/*
 * EmotionAnimal.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: luan.ha
 */

#include "EmotionAnimal.h"

EmotionAnimal::EmotionAnimal() {
	// TODO Auto-generated constructor stub
	setHappyIndex(7);
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

