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
public:

	void getWish();
	void getAttractions(string wish);
	
};

class USD:public Timezones
{
protected:
	double rate, u, othercurr;

public:
	double virtual toUSD()=0;
	double virtual fromUSD() = 0;
	
	void getCurrency(string wish);

};

/*
class Currency:public Timezones
{
public: 

	void getCurrency(string wish);

};
*/