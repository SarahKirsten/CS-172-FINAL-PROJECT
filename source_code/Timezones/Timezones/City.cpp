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
		for (int i = 0; i < 114; i++)
		{
			//reads in the file that contains the cities and their top 5 attractions
			file >> cityattractions[i];
		}
	}
	//close file
	file.close();
}

void City::outputAttractions(string wish)
{
	for (int j = 0; j < 114; j++)
	{
		//Finds the wish city in the array
		if (wish.compare(cityattractions[j]) == 0)
		{
			//outputs the the nexts 5 strings in the array
			//which are the top 5 attractions for the chosen city
			cout << "The top 5 attractions for " << wish << " are:" << endl;
			cout << cityattractions[j + 1] << endl << cityattractions[j + 2] << endl << cityattractions[j + 3]
				<< endl << cityattractions[j + 4] << endl << cityattractions[j + 5] << endl << endl;
			//breaks after it finds the city and outputs the attractions
			break;
		}	
	}
}



