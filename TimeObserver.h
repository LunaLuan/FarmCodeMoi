#pragma once
class TimeObserver
{
public:
	TimeObserver();

	virtual void onDayChange(int d) = 0;
	virtual void onHourChange(int h) = 0;

	virtual ~TimeObserver();
};

