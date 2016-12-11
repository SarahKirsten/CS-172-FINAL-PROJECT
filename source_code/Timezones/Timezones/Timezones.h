#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <iomanip>

using namespace std;



class Timezones
{
private:
	string myArray[372];
	string city;
	bool found = false;
	double fromOther;
	double toOther;
	ifstream fileOfCities;
	int countLine;
public:
	double hourss, minutess, hours2, minutes2, t2, time2;
	double locationt2;
	int finalhour;
	int finalminute;
	string location;
	string wish;
	//Implemented in city class virtual double toUSD();
	//Implemented in city class  double fromUSD();

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



