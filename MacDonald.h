/*
 * MacDonald.h
 *
 *  Created on: Mar 16, 2017
 *      Author: luan.ha
 */

#ifndef MACDONALD_H_
#define MACDONALD_H_

#include "AnimalManager.h"
#include "ResuorceManager.h"
#include <string>
#include <string.h>
#include <iostream>
using namespace std;

class MacDonald
{
public:
	void Menu();
	int SelectAction();
	void MacDonaldActivities();
	char Inputname(char);
	MacDonald();
	virtual ~MacDonald();

private:
	AnimalManager am;
	ResuorceManager rm;
};

#endif /* MACDONALD_H_ */
