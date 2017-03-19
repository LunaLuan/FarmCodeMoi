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

	void setAnimalManager(TimeObserver *observer);
	void removeAnimalManager(TimeObserver *observer);


	virtual ~TimeManager();
private:
	TimeManager();
	static TimeManager *timeManager;
	int lastHour ;
	int lastDay ;
	int g_day;
	int g_hour;
	int timePluss;
	clock_t start;
	int duration;// thoi gian hien tai

	TimeObserver *animalManager;

	void notifyHourChange();
	void notifyDayChange();

	void removeAnimalDie();





};

