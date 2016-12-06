#include<iostream>
#include"City.h"
#include<fstream>
#include<string>
using namespace std;

void City::getWish()
{
	//gets wish from timezone class
	this->citywish = wish;
}

void City::getAttractions(string wish)
{
	//reads in attractions file
	ifstream file("Attractions.txt");
	if (file.is_open())
	{
		for (int i = 0; i < 372; ++i)
		{
			//reads in the city then the string of attractions
			file >> city >> " " >> attractions;

			//finds the line of code with the wished city
			if (city.compare(citywish) == 0)
			{
				//outputs the string of attractions
				cout << attractions;
			}
		}
	}
	//close file
	file.close();
}

double City::toUSD()
{
	return this->toUSD;
}

double City::fromUSD()
{
	return this->fromUSD;
}