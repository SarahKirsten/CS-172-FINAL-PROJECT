#include "Header.h"
#include "Timezones.h"//Including class for Timezones
#include "City.h"//Including class for City


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
	/*city.setWish();*/
	city.fileinput();
	city.current();
	city.compare();


	if (city.wish == "Kathmandu")//If specific city is Kathmandu, because weird time zone
	{
		city.kathmandu();//calls function of kathmandu
	}

	else
	{
		city.regular();//calls function for regular timezones
	}
	return 0;


	//else if (city.wish == "Kabul")//is kabul, because weird time zone
	//{
	//	city.kabul();//calls function of kabul
	//}
	//else if (city.wish == "Calcutta" || city.wish == "NewDelhi" || city.wish == "Colombo")//weird timezone
	//{
	//	city.calcutta();//calls function because weird timezone
	//}
	
}


