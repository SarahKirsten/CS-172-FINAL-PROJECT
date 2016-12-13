#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"Timezones.h"

using namespace std;

class City: public Timezones
{
private:
	string cityattractions[114];

public:

	void getAttractions(string wish);
	void outputAttractions(string wish);
	
};

