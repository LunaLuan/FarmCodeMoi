#pragma once
#include "TimeObserver.h"
#include <iostream>
#include <cstdio>
#include <ctime>
#include <list>
#include <Windows.h>
#include <string>

using namespace std;

class TimeManager
{
public:
	static TimeManager* getInstance();

	int getGDay();
	int getGHour();

	void jumpToNextDay();
	void covertTime();

	void addTimeObsever(TimeObserver *observer);
	void removeTimeObsever(TimeObserver *observer);

	void addAnimalManager(TimeObserver *observer);
	void removeAnimalManager(TimeObserver *observer);


	virtual ~TimeManager();
private:
	TimeManager();
	static TimeManager *timeManager;
	int lastHour = -1;
	int lastDay = -1;
	int g_day=0;
	int g_hour=0;
	int timePluss=0;
	clock_t start;
	int duration;// thoi gian hien tai

	list<TimeObserver*> timeObservers;
	TimeObserver *animalManager;

	void notifyHourChange();
	void notifyDayChange();

	void removeAnimalDie();





};

