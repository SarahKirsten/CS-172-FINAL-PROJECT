#pragma once
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class City
{
private:
	string city;
	string attractions;
public:

	void getWish();
	void getAttractions(string wish);
	double virtual toUSD();
	double virtual fromUSD();
};

class USD
{
protected:
	double rate, u, othercurr;

public:
	double virtual toUSD()=0;
	double virtual fromUSD() = 0;
	
	friend class Timezones;// NOT SURE IF THIS IS CORRECT

};
class OtherCurrency:public USD
{
public: 

	double convertToCurrency();

};