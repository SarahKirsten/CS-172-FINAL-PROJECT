#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"Timezones.h"

using namespace std;

class City
{
private:
	string city;
	string attractions;
	bool found = false;
public:

	void getWish();
	void getAttractions(string wish);
	
};


