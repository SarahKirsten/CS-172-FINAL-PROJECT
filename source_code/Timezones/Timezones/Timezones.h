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
	double toUSD;
	double toCur;
	bool found = false;
public:
	string wish;
	double money;

	void fileinput();
	void current();
	void compare();
	void kathmandu();
	void kabul();
	void calcutta();
	void regular();
	double setCurToUSD(double toUSD);
	double setUSDToCur(double toCur);
};



