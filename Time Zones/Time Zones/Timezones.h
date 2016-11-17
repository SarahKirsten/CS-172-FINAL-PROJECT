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
	string myArray[198];
	bool found = false;
public:
	string wish;

	void fileinput();
	void current();
	void compare();
	void kathmandu();
	void kabul();
	void calcutta();
	void regular();
};



