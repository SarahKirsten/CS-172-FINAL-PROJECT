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
		if (wish.compare(cityattractions[j]) == 0)
		{
			cout << "The top 5 attractions for " << wish << " are:" << endl;
			cout << cityattractions[j + 1] << endl << cityattractions[j + 2] << endl << cityattractions[j + 3]
				<< endl << cityattractions[j + 4] << endl << cityattractions[j + 5] << endl << endl;

			break;
		}	
	}
}



