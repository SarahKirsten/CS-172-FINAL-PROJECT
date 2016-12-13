#include "Timezones.h"



//read file into array
void Timezones::fileinput()
{

	ifstream file("Timezones.txt");//declaring existence and name of text file

	if (file.is_open()) //opens file
		for (int i = 0; i < 372; ++i)//loop reads non white space and stores it in array
		{
			file >> myArray[i];//the array the txt file is in
		}

	file.close();//file closes
}
	

//read computer time
void Timezones::current() {
	//convert current time to string form
	time_t rawtime;
	struct tm* timeinfo;//This is a structure. Only mostly know what its doing

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	hourss = timeinfo->tm_hour;//Declaring the hour section of the structure time as a double
	minutess = timeinfo->tm_min;//Declaring the minute section of the structure time as a double

	cout << endl << "Please input the city whose time zone you wish to know (remember, it's a proper noun!): ";//Meaning the city entered has to start with a capital letter

	cin >> wish;//read in wanted city
}


//get GMT of location city
void Timezones::compare() {
	for (int j = 0; j <= 372; j++)
	{
		if (location.compare(myArray[j]) == 0)//if the same as an element, saves corresponding GMT time conversion as t2
		{
			string time2 = myArray[j - 1];
			locationt2 = stod(time2);

			string money = myArray[j + 1];
			City::toUSD = stod(money);
			found = true;
			break;
			//cout << "The GMT offset is: " << t2 << endl;
		}
	}
	if (!found)
		cout << "The city you input does not exist in this universe or is not capitalized." << endl << endl;
}


//get GMT of wish city
void Timezones::compare2() {
	for (int j = 0; j <= 372; j++)
	{
		if (wish.compare(myArray[j]) == 0)//if the same as an element, saves corresponding GMT time conversion as t2
		{
			string time2 = myArray[j - 1];
			t2 = stod(time2);
			found = true;
			break;
			//cout << "The GMT offset is: " << t2 << endl;
		}
	}
	if (!found)
		cout << "The city you input does not exist in this universe or is not capitalized." << endl << endl;
}


//change computer time to location kathmandu time
void Timezones::kathmandu() {
	hours2 = hourss + 8.0 + 5.0;//Hours of city is offset from Spokane to 00:00 plus offset from 00:00 to requested city
	minutes2 = minutess + 45; //Weird time zone of 3/4 an hour
	if (minutes2 >= 60)//If minutes exceeds 60, displays properly
	{
		hours2++;
		minutes2 = minutes2 - 60;
	}
	
	finalminute = minutess;
	if (hours2 >= 24)//If city is one-day ahead
	{
		int hours3 = hours2 - 24;
		if (hours3 > 12)
		{
			cout << "The current time in " << location << " is " << hours3 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM." << endl;
			finalhour = hours3 - 12;
		}
		else if (hours3 == 0)
		{
			cout << "The current time in " << location << " is " << 12 << ":" << setfill('0') << setw(2) << minutes2 << " AM." << endl;
			finalhour = 24;
		}
		else
		{
			cout << "The current time in " << location << " is " << hours3 << ":" << setfill('0') << setw(2) << minutes2 << " AM." << endl;
			finalhour = hours3;
		}

	}
	else if (hours2 > 12)
	{
		cout << "The current time in " << location << " is " << hours2 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM." << endl;
		finalhour = hours2 - 12;
	}
	else if (hours2 == 0)
	{
		cout << "The current time in " << location << " is " << 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM." << endl;
		finalhour = 12;

	}
	else
	{
		cout << "The current time in " << location << " is " << hours2 << ":" << setfill('0') << setw(2) << minutes2 << " AM." << endl;
		finalhour = hours2;	
	}
}


//change location city time to wish kathmandu time
void Timezones::kathmandu2()
{
	//hours2=finalhour + (Location GMT) + (wish GMT)
	hours2 = finalhour - locationt2 + t2;
	minutes2 = finalminute + 45;
	if (minutes2 >= 60)//If minutes exceeds 60, displays properly
	{
		hours2++;
		minutes2 = minutes2 - 60;
	}
	if (hours2 >= 24)//If city is one-day ahead (of spokane)
	{
		int hours3 = hours2 - 24;
		if (hours3 >= 12)
		{
			cout << "The current time in " << wish << " is " << hours3 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM the next day." << endl;
			finalhour = hours3 - 12;
		}
		else
		{
			cout << "The current time in " << wish << " is " << hours3 << ":" << setfill('0') << setw(2) << minutes2 << " AM the next day." << endl;
			finalhour = hours3;
		}

	}
	else if (hours2 >= 12)
	{
		cout << "The current time in " << wish << " is " << hours2 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM." << endl;
		finalhour = hours2 - 12;
	}
	else
	{
		cout << "The current time in " << wish << " is " << hours2 << ":" << setfill('0') << setw(2) << minutes2 << " AM." << endl;
		finalhour = hours2;
	}
}

/*dont need this unless future development*/
//void Timezones::kabul() {
//	hours2 = hourss + 7.0 + 4.0;//Hours of city is offset from Spokane to 00:00 plus offset from 00:00 to requested city
//	minutes2 = minutess + 30;//Weird time zone of half an hour
//	if (minutes2 >= 60)//If minutes exceeds 60, displays properly
//	{
//		hours2++;
//		minutes2 = minutes2 - 60;
//	}
//	if (hours2 >= 24)//If city is one-day ahead
//	{
//		int hours3 = hours2 - 23;
//		if (hours3 >= 12)
//			cout << "The current time in " << wish << " is " << hours3 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM the next day." << endl;
//		else
//			cout << "The current time in " << wish << " is " << hours3 << ":" << setfill('0') << setw(2) << minutes2 << " AM the next day." << endl;
//	}
//	else if (hours2 >= 12)
//		cout << "The current time in " << wish << " is " << hours2 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM." << endl;
//	else
//		cout << "The current time in " << wish << " is " << hours2 << ":" << setfill('0') << setw(2) << minutes2 << " AM." << endl;
//
//}
//
//void Timezones::calcutta() {
//	hours2 = hourss + 7.0 + 5.0;//Hours of city is offset from Spokane to 00:00 plus offset from 00:00 to requested city
//	minutes2 = minutess + 30;//Weird time zone of half an hour
//	if (minutes2 >= 60)//If minutes exceeds 60, displays properly
//	{
//		hours2++;
//		minutes2 = minutes2 - 60;
//	}
//	if (hours2 >= 24)//If city is one-day ahead
//	{
//		int hours3 = hours2 - 23;
//		if (hours3 >= 12)
//			cout << "The current time in " << wish << " is " << hours3 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM the next day." << endl;
//		else
//			cout << "The current time in " << wish << " is " << hours3 << ":" << setfill('0') << setw(2) << minutes2 << " AM the next day." << endl;
//	}
//	else if (hours2 >= 12)
//		cout << "The current time in " << wish << " is " << hours2 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM." << endl;
//	else
//		cout << "The current time in " << wish << " is " << hours2 << ":" << setfill('0') << setw(2) << minutes2 << " AM." << endl;
//
//}



//change computer time to location city time
void Timezones::regular() {

		hours2 = hourss + 8.0 + locationt2;//Hours of city is offset from Spokane to 00:00 plus offset from 00:00 to requested city
		finalminute = minutess;
		if (hours2 >= 24)//If city is one-day ahead
		{
		int hours3 = hours2 - 24;
			if (hours3 > 12)
			{
				cout << "The current time in " << location << " is " << hours3 - 12 << ":" << setfill('0') << setw(2) << minutess << " PM." << endl;
				finalhour = hours3 + 12;
			}
			else if (hours3 == 0)
			{
				cout << "The current time in " << location << " is " << 12 << ":" << setfill('0') << setw(2) << minutess << " AM." << endl;
				finalhour = 0;
			}
			else
			{
				cout << "The current time in " << location << " is " << hours3 << ":" << setfill('0') << setw(2) << minutess << " AM." << endl;
				finalhour = hours3;
			}
		}
		else if (hours2 > 12)
		{
			cout << "The current time in " << location << " is " << hours2 - 12 << ":" << setfill('0') << setw(2) << minutess << " PM." << endl;
			finalhour = hours2;
		}
		else if (hours2 == 0)
		{
			cout << "The current time in " << location << " is " << 12 << ":" << setfill('0') << setw(2) << minutess << " AM." << endl;
			finalhour = 0;
		}
		else
		{
			cout << "The current time in " << location << " is " << hours2 << ":" << setfill('0') << setw(2) << minutess << " AM." << endl;
			finalhour = hours2;
		}
		//cout << endl << finalhour << ":" << finalminute << endl;
}



//change location city time to wish city time
void Timezones::regular2() {

	hours2 = finalhour - locationt2 + t2;//Hours of city is offset from Spokane to 00:00 plus offset from 00:00 to requested city
	if (hours2 >= 24)//If city is one-day ahead
	{
		int hours3 = hours2 - 24;
		if (hours3 > 12)
		{
			cout << "The current time in " << wish << " is " << 24 - hours3 << ":" << setfill('0') << setw(2) << finalminute << " PM the next day." << endl;
		}
		else if (hours3 == 0)
		{
			cout << "The current time in " << wish << " is " << 12 << ":" << setfill('0') << setw(2) << finalminute << " AM the next day." << endl;
		}
		else
		{
			cout << "The current time in " << wish << " is " << hours3 << ":" << setfill('0') << setw(2) << finalminute << " AM the next day." << endl;
		}
	}
	else if (hours2 > 12)
	{
		cout << "The current time in " << wish << " is " << hours2-12 << ":" << setfill('0') << setw(2) << finalminute << " PM." << endl;
	}
	else if (hours2 == 0)
	{
		cout << "The current time in " << wish << " is " << 12 << ":" << setfill('0') << setw(2) << finalminute << " PM." << endl;
	}
	else
	{
		cout << "The current time in " << wish << " is " << hours2 << ":" << setfill('0') << setw(2) << finalminute << " AM." << endl;
	}
}



/* implemented in city file double Timezones::toUSD()
{
	return 0;
}

double Timezones::fromUSD()
{
	return 0;
}*/ 

