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
	double money;
	int d = 0;
	int v = 0;

	Timezones city;
	/*city.setWish();*/
	city.fileinput();

	cout << "How many time changes do you want to look at? ";
	cin >> v;
	
	do
	{

		cout << "What is your current city? ";
		cin >> city.location;
		//cout << endl << location << endl;
		cout << "How much money will be with you? ";
		cin >> money;//remember this is local currency, need change to USD
		//cout << endl << money << endl;





		city.current();
		city.compare();
		city.compare2();
		//city.getGMT();

		//computer time to location time
		if (city.location == "Kathmandu")//If specific city is Kathmandu, because weird time zone
		{
			city.kathmandu();//calls function of kathmandu
		}

		/*else if (city.location == "Spokane" || city.location == "Seattle" || city.location == "LosAngeles" || city.location == "SanDiego")
			city.sameplace();*/
		else
		{
			city.regular();//calls function for regular timezones
		}



		if (city.wish == "Kathmandu")
		{
			city.kathmandu2();
		}
		else
		{
			city.regular2();
		}
		


		//else if (city.wish == "Kabul")//is kabul, because weird time zone
		//{
		//	city.kabul();//calls function of kabul
		//}
		//else if (city.wish == "Calcutta" || city.wish == "NewDelhi" || city.wish == "Colombo")//weird timezone
		//{
		//	city.calcutta();//calls function because weird timezone
		//}

		d++;
		cout << endl << endl;
	} while (d < v);
	return 0;
}


