#include<iostream>
#include"City.h"
#include<fstream>
#include<string>
using namespace std;

string City::getWish()
{
	this->citywish = wish;
}

string City::getAttractions(string wish)
{
	ifstream file("Attractions.txt");
	if (file.is_open())
	{
		for (int i = 0; i < 372; ++i)
		{
			file >> city >> " " >> attractions;

			if (city.compare(citywish) == 0)
			{
				cout << attractions;
			}
		}
	}
	file.close();
}

