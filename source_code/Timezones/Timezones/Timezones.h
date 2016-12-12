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
	string myArray[372];//array for TimeZones.txt
	string city;//array item
	bool found = false;//condition to find city in array or not
	double fromOther;//currency thing
	double toOther;//currency thing
public:
	double hourss;//computer hour
	double minutess;//computer minute
	double hours2;//hours after math in kathmandu2, kathmandu, regular2, and regular
	double minutes2;//minutes after math in kathmandu2, kathmandu, regular2, and regular
	double locationt2;//GMT of location city
	double t2;//GMT of wish city
	double time2;//array item of GMT
	int finalhour;//hour used to convert location to wish
	int finalminute;//minute used to convert location to wish
	string location;//current city
	string wish;//city user wants to go to
	//Implemented in city class virtual double toUSD();
	//Implemented in city class  double fromUSD();

	void fileinput();//reads file
	void current();//gets computer time
	void compare();//stores GMT of location
	void compare2();//stores GMT of wish
	void kathmandu();//computer time to location kathmandu
	void kathmandu2();//location to wish kathmandu
	//void kabul();
	//void calcutta();
	void regular();//computer time to location city
	void regular2();//location to wish city
};



