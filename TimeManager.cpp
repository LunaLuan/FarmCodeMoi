#include "TimeManager.h"

TimeManager * TimeManager::timeManager;

TimeManager * TimeManager::getInstance() {
	if (!timeManager) {
		timeManager = new TimeManager();
	}
	return timeManager;
}

TimeManager::TimeManager() {
	start = clock(); // start time
	g_day = 0;
	g_hour = 0;

	lastHour = -1;
	lastDay = -1;

	timePluss = 0;
}

int TimeManager::getGDay() {
	return g_day;
}

int TimeManager::getGHour() {
	return g_hour;
}

void TimeManager::covertTime() {
	duration = (int) (clock() - start) / (int) CLOCKS_PER_SEC;	// 1s

	//cout << "real time: " << duration << '\n';
	g_hour = (((timePluss + duration) / 3) % 24);
	g_day = ((timePluss + duration) / 72);

	if (g_day != lastDay) {
		cout << " Day: " << g_day << endl;
		notifyDayChange();
	}
	if (g_hour != lastHour) {
		if (g_hour > 12) {
			cout << "\tTime: " << g_hour - 12 << "PM" << endl;
		} else {
			cout << "\tTime: " << g_hour << "AM" << endl;
		}

		notifyHourChange();
	}

	lastDay = g_day;
	lastHour = g_hour;

}

void TimeManager::notifyHourChange() {
	animalManager->onHourChange(g_hour);
}

void TimeManager::notifyDayChange() {
	animalManager->onDayChange(g_day);
}

TimeManager::~TimeManager() {
}


void TimeManager::setAnimalManager(TimeObserver* observer) {
	animalManager = observer;
}

void TimeManager::removeAnimalManager(TimeObserver* observer) {
	animalManager = NULL;
}

void TimeManager::removeAnimalDie() {
}

void TimeManager::jumpToNextDay() {
	for (int i = 0; i < 72; i++) {
		timePluss++;
		this->covertTime();
	}

}
