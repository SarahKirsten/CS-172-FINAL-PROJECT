#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"Timezones.h"
using namespace std;

class City : public Timezones
{
private:
	string city;
	string citywish;
	string attractions;
public:
	string getWish();
	string getAttractions(string citywish);
};