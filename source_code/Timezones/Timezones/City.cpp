#include<iostream>
#include"City.h"
#include<fstream>
#include<string>
#include"Timezones.h"

using namespace std;

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

