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
	cout << endl;
//Loop to ask user how many times they would like to use the program before exiting
	for (int d = 0; d < v; d++) {
	//Create object city for timezones in relation to city
		Timezones city;
	//Create object city2 for the currency in relation to city
		USD city2;
	//Set equal for precautionary, money makes more sense in USD class but it works better in Timezone class
		city2.money = city.money;
	//Create object attractions to implement attraction functions
		City attractions;
	//Open file
		city.fileinput();


	//Ask user for their location via city
		cout << "What is your current city? ";
	//input  location city to use to compare to city names stored in myArray in Timezone class
		cin >> city.location;
		//Current to take in wished city
		city.current();
		//Compare location city with cities in array to find offset
		city.compare();
		//Compare wish city with cities in array to find offset
		city.compare2();
		cout << endl << endl;
		//Pull attractions out 
		attractions.getAttractions(city.wish);
		//Display attractions for requested city
		attractions.outputAttractions(city.wish);
	
		cout << "How much money will be with you? ";
		cin >> city.money;//remember this is local currency, need change to USD
		cout << endl << endl;
	//FIX
		cout << "toUSD" << city.toUSD() << endl;
	//comment out later
		cout << "Money conversion from formula: " << city2.fromFormula() << endl;
		cout<<"from USD: "<<city.fromUSD()<<endl;
	//comment out later
		cout << "Money after conversion: " << city2.toFormula() << endl;
		//
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
			city.kathmandu2();//location to Kathmandu time(special case for offset)
		}
		else
		{
			city.regular2(); //location to a regular city time
		}
		
		cout << endl << endl;
}
	return 0;
		//else if (city.wish == "Kabul")//is kabul, because weird time zone
		//{
		//	city.kabul();//calls function of kabul
		//}
		//else if (city.wish == "Calcutta" || city.wish == "NewDelhi" || city.wish == "Colombo")//weird timezone
		//{
		//	city.calcutta();//calls function because weird timezone
		}



