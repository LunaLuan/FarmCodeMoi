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

	isntGoOutDays = 0;
}

int EmotionAnimal::getHappyIndex() {
	return happyIndex;
}

void EmotionAnimal::setHappyIndex(int i) {
	happyIndex = i;
}

void EmotionAnimal::onHourChange(int h) {
}

void EmotionAnimal::onDayChange(int d) {
	if (!isGoOutInDay) {
		isntGoOutDays++;
		if (isntGoOutDays == 2) {
			cout << name << " da khong duoc ra ngoai 2 hom nay. No dang buon...\n";
			if(happyIndex > 0)
				happyIndex--;
			isntGoOutDays = 0;
		}

	}
	if(happyIndex == 0 ) {

		sadDays++;
		if(sadDays == 3) {
			cout << "sadDay" << sadDays << "\n";
			die();

		}
		else {
			cout << name << " co tam trang rat kem. No can duoc ra ngoai...\n";
		}

	}

}

EmotionAnimal::~EmotionAnimal() {
	// TODO Auto-generated destructor stub
}



void EmotionAnimal::goOut() {
	Animal::goOut();
	if (isOut) {
		happyIndex += 2;
	}
}

void EmotionAnimal::goBack() {
	Animal::goBack();
}
