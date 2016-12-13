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
	
	int v = 0;
	cout << "How many time changes do you want to see? ";
	cin >> v;

	for (int d = 0; d < v; d++) {
		Timezones city;
		USD convertcurrency;
		City attractions;
		/*city.setWish();*/
		city.fileinput();

		double money;



		cout << "What is your current city? ";
		cin >> city.location;
		//cout << endl << location << endl;
		cout << "How much money will be with you? ";
		cin >> money;//remember this is local currency, need change to USD
		//cout << endl << money << endl;

		convertcurrency.getCurrencyto(city.location);

		



		city.current();
		city.compare();
		city.compare2();
		convertcurrency.getCurrencyfrom(city.wish);
		attractions.getAttractions(city.wish);
		attractions.outputAttractions(city.wish);

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
		return 0;
}

		//else if (city.wish == "Kabul")//is kabul, because weird time zone
		//{
		//	city.kabul();//calls function of kabul
		//}
		//else if (city.wish == "Calcutta" || city.wish == "NewDelhi" || city.wish == "Colombo")//weird timezone
		//{
		//	city.calcutta();//calls function because weird timezone
		}



