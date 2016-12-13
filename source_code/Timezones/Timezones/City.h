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
	//string attractions;
	bool found = false;
public:

	void getWish();
	void getAttractions(string wish);
	void outputAttractions(string wish);
	
};

class USD:public Timezones
{
protected:
	double rate, u, othercurr;

public:
	double toUSD;
	double fromUSD;
	
	void getCurrencyto(string location);
	void getCurrencyfrom(string wish);

};

/*
class Currency:public Timezones
{
public: 

	void getCurrency(string wish);

};
*/