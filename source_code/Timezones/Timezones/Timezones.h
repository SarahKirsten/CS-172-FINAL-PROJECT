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
	string myArray[465];//array of GMT city toUSD fromUSD
	string city;//array item
	bool found = false;//to make sure city is a city in file

public:
	double hourss;//computer hour
	double minutess;//computer minute
	double hours2;//hour after some math
	double minutes2;//minute after some math
	double locationt2;//GMT for location city
	double t2;//GMT for wish city
	double time2;//array item
	double money;//?for currency stuff
	double money1;//?for currency stuff
	double money2;//?for currency stuff
	string currency;
	double fromOther, toOther;//?for currency stuff
	int finalhour;//helps for location to wish
	int finalminute;//helps for location to wish
	string location;//array item
	string wish;//array item

	double toUSD();//?currency
	double fromUSD();//?currency
	void fileinput();//read in file to myArray
	void current();//computer time
	void compare();//get GMT of location
	void compare2();//get GMT of wish
	void kathmandu();//location kathmandu
	void kathmandu2();//wish kathmandu
	//void kabul();
	//void calcutta();
	void regular();//location regular
	void regular2();//wish regular
	//double getGMT();
};

class USD :public Timezones//?currency stuff
{
protected:
	double rate, othercurr;

public:
	double u;
	double fromFormula();
	double toFormula();
};



