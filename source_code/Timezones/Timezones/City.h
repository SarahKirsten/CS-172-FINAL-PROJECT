#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"Timezones.h"

using namespace std;

class City: public Timezones
{
private:
	string cityattractions[114];//array for wish attractions

public:

	void getAttractions(string wish);//get attractions for wish city
	void outputAttractions(string wish);//SHOW attractions for wish city
	
};

