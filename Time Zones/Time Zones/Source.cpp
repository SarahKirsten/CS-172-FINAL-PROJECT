/////////////////////////
//Program Name: Final Team Project
//Name: 2b||!2b: Sarah Kirsten, Marnie Rimes, Anna Tran
//Class and Section: CS172-1
//Date:11/16/2016
///////////////////////
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <iomanip>
#include "Timezones.h"//Including class for Timezones


//void fileinput();
//void compare();
//void kathmandu();
//void kabul();
//void calcutta();
//void current();
//void regular();

int main()
{
	Timezones city;
	city.fileinput();
	city.current();
	city.compare();
	if (city.wish == "Kathmandu")//If specific city is Katmandu, because weird time zone
	{
		city.kathmandu();//calls function of kathmandu
	}
	else if (city.wish == "Kabul")//is kabul, because weird time zone
	{
		city.kabul();//calls function of kabul
	}
	else if (city.wish == "Calcutta" || city.wish == "NewDelhi" || city.wish == "Colombo")//weird timezone
	{
		city.calcutta();//calls funtion because weird timezone
	}
	else
	{
		city.regular();//calls function for regular timezones
	}
	return 0;
}


