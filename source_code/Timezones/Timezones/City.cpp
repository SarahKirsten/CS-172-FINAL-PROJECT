#include<iostream>
#include"City.h"
#include<fstream>
#include<string>
#include"Timezones.h"

using namespace std;

void City::getWish()
{
	//gets wish from timezone class
	/*this->citywish = wish;*/

	//trying to change to the has-a relationship
}

void City::getAttractions(string wish)
{
	//reads in attractions file
	ifstream file("Attractions.txt");
	if (file.is_open())
	{
		for (int i = 0; i < 114; ++i)
		{
			//reads in the city then the string of attractions
			file >> city /*>> " " */>> attractions; /*note from Sarah: the program doesn't like ( >> " " )*/

			//finds the line of code with the wished city
			if (city.compare(wish) == 0)
			{
				cout << "The top five attractions for " << wish << " are ";
				//outputs the string of attractions
				cout << attractions << endl;
			}
		}
	}
	//close file
	file.close();
}

/*double USD::toUSD()
{
	u = othercurr*rate;
	return u;
}

double USD::fromUSD()
{
	othercurr = u / rate;
	return othercurr;
}*/

void USD::getCurrencyto(string location)
{
	for (int j = 0; j <= 372; j++)//reads every fourth byte for 
	{
		if (location.compare(myArray[j]) == 0)//if the same as an element, saves corresponding toUSD
		{
			string money = myArray[j+1]; 
			toUSD = stod(money);
			found = true;
			break;
			cout <<  endl;
		}
	}
	if (!found)
		cout << "Currency conversion not found" << endl << endl;
}

void USD::getCurrencyfrom(string wish)
{
	for (int j = 0; j <= 372; j++)
	{
		if (wish.compare(myArray[j]) == 0)//if the same as an element, saves corresponding fromUSD 
		{
			string money = myArray[j + 2];
			fromUSD = stod(money);
			found = true;
			break;
			cout << endl;
		}
	}
	if (!found)
		cout << "Currency conversion not found" << endl << endl;
}

