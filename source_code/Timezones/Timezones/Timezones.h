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
	double hourss, minutess, hours2, minutes2, t2;
	string myArray[372];
	string city;
	bool found = false;
public:
	string wish;
	virtual double toUSD();
	virtual double fromUSD();

	void fileinput();
	void current();
	void compare();
	void kathmandu();
	void kabul();
	void calcutta();
	void regular();
	//double setCurrencyToUSD(double toUSD);
	//double setUSDToCurrency(double fromUSD);
};



