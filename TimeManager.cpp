
#include "TimeManager.h"

TimeManager * TimeManager::timeManager;

TimeManager * TimeManager::getInstance()
{
	if (!timeManager) {
		timeManager = new TimeManager();
	}
	return timeManager;
}

TimeManager::TimeManager()
{
	start = clock();// start time
	//g_day = 0;
	//g_hour = 0;
}





int TimeManager::getGDay()
{
	return g_day;
}

int TimeManager::getGHour()
{
	return g_hour;
}


void TimeManager::covertTime()
{
	
	duration = (int)(clock() - start) / (int)CLOCKS_PER_SEC;// 1s

	//cout << "real time: " << duration << '\n';
	g_hour = ((duration / 3) % 24);
	g_day = (duration / 72);

	if (g_day != lastDay) {
		cout << " Day: " << g_day << endl;
		notifyDayChange();
	}
	if (g_hour != lastHour) {
		if (g_hour > 12) {
			cout << "\tTime: " << g_hour-12 << "PM" << endl;
		}
		else { 
			cout << "\tTime: " << g_hour << "AM" << endl; 
		}
		
		notifyHourChange();
	}
	
	lastDay = g_day;
	lastHour = g_hour;

	
	
}



void TimeManager::addTimeObsever(TimeObserver * observer)
{
	timeObservers.push_back(observer);
}

void TimeManager::notifyHourChange()
{
	for (list <TimeObserver*>::iterator t = timeObservers.begin(); 
		t != timeObservers.end(); t++) {
		(*t)->onHourChange(g_hour);
	}
}

void TimeManager::notifyDayChange()
{
	for (list <TimeObserver*>::iterator t = timeObservers.begin();
		t != timeObservers.end(); t++) {
		(*t)->onDayChange(g_day);
	}
}

TimeManager::~TimeManager()
{
}
