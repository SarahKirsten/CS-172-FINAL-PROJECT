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
	double toUSD();
	double fromUSD();
};