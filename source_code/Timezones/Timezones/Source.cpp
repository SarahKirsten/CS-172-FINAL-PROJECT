#include "Header.h"
#include "Timezones.h"//Including class for Timezones
#include "City.h"//Including class for City


/*Dont need these here*/
//void fileinput();
//void compare();
//void kathmandu();
//void kabul();
//void calcutta();
//void current();
//void regular();

int main()
{

	int v = 0;//# of program runs
	cout << "How many time changes do you want to see? ";
	cin >> v;

	for (int d = 0; d < v; d++) {//loop until want to end program
		Timezones city;
		USD city2;
		city2.money1 = city.money1;
		City attractions;
		/*city.setWish();*/
		city.fileinput();//read in GMT city toUSD fromUSD



		cout << "What is your current city? ";
		cin >> city.location;
		//cout << endl << location << endl;
		cout << "How much money will be with you? ";
		cin >> city.money;//remember this is local currency, need change to USD
		//cout << endl << money << endl;


		city.current();//computer time
		city.compare();//get GMT of location city
		cout << "Money conversion: " << city2.fromOther() << endl;//location money to USD money
		city.compare2();//get GMT of wish city
		cout << "Money conversion: " << city2.toOther() << endl;//USD money to wish money
		cout << "Money after conversion: " << city2.fromOther() << endl << endl;//USD money to wish money
		attractions.getAttractions(city.wish);//get attractions for wish city
		attractions.outputAttractions(city.wish);//SHOW attractions for wish city


		//computer time to location time
		if (city.location == "Kathmandu")//If specific city is Kathmandu, because weird time zone
		{
			city.kathmandu();//calls function of location kathmandu
		}

		else
		{
			city.regular();//calls function of location regular cities
		}



		if (city.wish == "Kathmandu")//weird time zone
		{
			city.kathmandu2();//calls function of wish kathmandu
		}
		else
		{
			city.regular2();//calls function of wish regular cities
		}

		cout << endl << endl;//adds spaces between program runs
	}
	/*dont need unless future development*/
		//else if (city.wish == "Kabul")//is kabul, because weird time zone
		//{
		//	city.kabul();//calls function of kabul
		//}
		//else if (city.wish == "Calcutta" || city.wish == "NewDelhi" || city.wish == "Colombo")//weird timezone
		//{
		//	city.calcutta();//calls function because weird timezone
	return 0;
}



