#include "Timezones.h"


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


void Timezones::current() {
	//convert current time to string form
	time_t rawtime;
	struct tm* timeinfo;//This is a structure. Only mostly know what its doing

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	hourss = timeinfo->tm_hour;//Declaring the hour section of the structure time as a double
	minutess = timeinfo->tm_min;//Declaring the minute section of the structure time as a double

	cout << "Your current time is:  " << hourss << ":" << setfill('0') << setw(2) << minutess << endl;//Displays current time, military time, precision set to 2 places
	cout << endl << "Please input the city whose time zone you wish to know (remember, it's a proper noun!): ";//Meaning the city entered has to start with a capital letter

	cin >> wish;//read in wanted city
}

void Timezones::compare() {
	for (int j = 0; j <= 372; j++)
	{
		if (wish.compare(myArray[j]) == 0)//if the same as an element, saves corresponding GMT time conversion as t2
		{
			string time2 = myArray[j - 1];
			t2 = stoi(time2);
			found = true;
			break;
			//cout << "The UTC offset is: " << t2 << endl;
		}
	}
	if (!found)
		cout << "The city you input does not exist in this universe or is not capitalized." << endl << endl;
}

void Timezones::kathmandu() {
	hours2 = hourss + 7.0 + 5.0;//Hours of city is offset from Spokane to 00:00 plus offset from 00:00 to requested city
	minutes2 = minutess + 45; //Weird time zone of 3/4 an hour
	if (minutes2 >= 60)//If minutes exceeds 60, displays properly
	{
		hours2++;
		minutes2 = minutes2 - 60;
	}
	if (hours2 >= 24)//If city is one-day ahead
	{
		int hours3 = hours2 - 23;
		if (hours3 >= 12)
			 cout << "The current time in " << wish << " is " << hours3 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM the next day." << endl;
		else
			 cout << "The current time in " << wish << " is " << hours3 << ":" << setfill('0') << setw(2) << minutes2 << " AM the next day." << endl;
	}
	else if (hours2 >= 12)
		 cout << "The current time in " << wish << " is " << hours2 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM." << endl;
	else
		 cout << "The current time in " << wish << " is " << hours2 << ":" << setfill('0') << setw(2) << minutes2 << " AM." << endl;
	
}

void Timezones::kabul() {
	hours2 = hourss + 7.0 + 4.0;//Hours of city is offset from Spokane to 00:00 plus offset from 00:00 to requested city
	minutes2 = minutess + 30;//Weird time zone of half an hour
	if (minutes2 >= 60)//If minutes exceeds 60, displays properly
	{
		hours2++;
		minutes2 = minutes2 - 60;
	}
	if (hours2 >= 24)//If city is one-day ahead
	{
		int hours3 = hours2 - 23;
		if (hours3 >= 12)
			cout << "The current time in " << wish << " is " << hours3 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM the next day." << endl;
		else
			cout << "The current time in " << wish << " is " << hours3 << ":" << setfill('0') << setw(2) << minutes2 << " AM the next day." << endl;
	}
	else if (hours2 >= 12)
		cout << "The current time in " << wish << " is " << hours2 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM." << endl;
	else
		cout << "The current time in " << wish << " is " << hours2 << ":" << setfill('0') << setw(2) << minutes2 << " AM." << endl;

}

void Timezones::calcutta() {
	hours2 = hourss + 7.0 + 5.0;//Hours of city is offset from Spokane to 00:00 plus offset from 00:00 to requested city
	minutes2 = minutess + 30;//Weird time zone of half an hour
	if (minutes2 >= 60)//If minutes exceeds 60, displays properly
	{
		hours2++;
		minutes2 = minutes2 - 60;
	}
	if (hours2 >= 24)//If city is one-day ahead
	{
		int hours3 = hours2 - 23;
		if (hours3 >= 12)
			cout << "The current time in " << wish << " is " << hours3 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM the next day." << endl;
		else
			cout << "The current time in " << wish << " is " << hours3 << ":" << setfill('0') << setw(2) << minutes2 << " AM the next day." << endl;
	}
	else if (hours2 >= 12)
		cout << "The current time in " << wish << " is " << hours2 - 12 << ":" << setfill('0') << setw(2) << minutes2 << " PM." << endl;
	else
		cout << "The current time in " << wish << " is " << hours2 << ":" << setfill('0') << setw(2) << minutes2 << " AM." << endl;

}

void Timezones::regular() {
	if (found)
	{
		hours2 = hourss + t2 + 7.0;//Hours of city is offset from Spokane to 00:00 plus offset from 00:00 to requested city
		if (hours2 >= 24)//If city is one-day ahead
		{
			int hours3 = hours2 - 24;
			if (hours3 >= 12)
				cout << "The current time in " << wish << " is " << 24 - hours3 << ":" << setfill('0') << setw(2) << minutess << " PM the next day." << endl;
			else if (hours3 == 0)
				cout << "The current time in " << wish << " is " << 12 << ":" << setfill('0') << setw(2) << minutess << " AM the next day." << endl;
			else
				cout << "The current time in " << wish << " is " << hours3 << ":" << setfill('0') << setw(2) << minutess << " AM the next day." << endl;
		}
		else if (hours2 >= 12)
			cout << "The current time in " << wish << " is " << 24 - hours2 << ":" << setfill('0') << setw(2) << minutess << " PM." << endl;
		else
			cout << "The current time in " << wish << " is " << hours2 << ":" << setfill('0') << setw(2) << minutess << " AM." << endl;
		
	}
}

double Timezones::setCurToUSD(double toUSD)
{
	this->toUSD = toUSD;
	return toUSD;
}

double Timezones::setUSDToCur(double toCur)
{
	this->toCur = toCur;
	return toCur;
}