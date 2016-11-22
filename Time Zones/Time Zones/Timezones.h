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
	
private:
	double hourss, minutess, hours2, minutes2, t2;
	string myArray[372];
	string city;
	double toUSD;
	double toCur;
	bool found = false;
	bool isAfterNoon = false;//check to see if time is after Noon, this will help for 12 hour format
public:
	string wish;
	double money;
	
	/*double currency;*/

	void fileinput();
	void current();
	//void compare();
	void kathmandu();
	void kabul();
	void calcutta();
	void regular();
	double setCurToUSD(double toUSD);
	double setUSDToCur(double toCur);
};



