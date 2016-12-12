#include<iostream>
#include"City.h"
#include<fstream>
#include<string>
using namespace std;

/*dont need this*/
//void City::getWish()
//{
//	//gets wish from timezone class
//	/*this->citywish = wish;*/
//
//	//trying to change to the has-a relationship
//}

void City::getAttractions(string wish)
{
	//reads in attractions file
	ifstream file("Attractions.txt");
	if (file.is_open())
	{
		for (int i = 0; i < 372; ++i)
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

double USD::toUSD()//location city currency to USD
{
	u = othercurr*rate;
	return u;
}

double USD::fromUSD()//USD to wish city currency
{
	othercurr = u / rate;
	return othercurr;
}

/*dont need this*/
/*double OtherCurrency::convertToCurrency()
{
	
}*/