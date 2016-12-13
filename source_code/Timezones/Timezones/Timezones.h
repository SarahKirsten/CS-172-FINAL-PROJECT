#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <iomanip>

using namespace std;



class Timezones
{
protected:
	string myArray[372];
	string city;
	bool found = false;
	ifstream fileOfCities;
	int countLine;

public:
	double hourss, minutess, hours2, minutes2, t2, time2;
	double money;
	double fromOther, toOther;
	double locationt2;
	int finalhour;
	int finalminute;
	string location;
	string wish;

	double toUSD();
	double fromUSD();
	void fileinput();
	void current();
	void compare();
	void compare2();
	void kathmandu();
	void kathmandu2();
	//void kabul();
	//void calcutta();
	void regular();
	void regular2();
	//double getGMT();
};

class USD :public Timezones
{
protected:
	double rate, othercurr;

public:
	double u;
	double fromFormula();
	double toFormula();
};



