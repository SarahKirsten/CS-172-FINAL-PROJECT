#include "Header.h"
#include "Timezones.h"//Including class for Timezones
#include "City.h"//Including class for City


/*dont need these this way, 
rewriten in main() using class dot (city.{})*/
//void fileinput();
//void compare();
//void kathmandu();
//void kabul();
//void calcutta();
//void current();
//void regular();

int main()
{
	double money;//helps with currency
	int d = 0;//counts how many times the program has run
	int v = 0;//how many times the program should run

	Timezones city;
	/*city.setWish();*/
	city.fileinput();//reads in file to array

	cout << "How many time changes do you want to look at? ";//this will help when we show the class and they want to interact with the program
	cin >> v;//number of time program should run
	
	do
	{

		cout << "What is your current city? ";
		cin >> city.location;//current city
		//cout << endl << location << endl;
		cout << "How much money will be with you? ";
		cin >> money;//remember this is local currency, need change to USD
		//cout << endl << money << endl;





		city.current();//get time of computer and wish city
		city.compare();//store GMT of location to locationt2
		city.compare2();//store GMT of wish to t2

		//computer time to location time
		if (city.location == "Kathmandu")//If specific city is Kathmandu, because weird time zone
		{
			city.kathmandu();//calls function of location kathmandu
		}
		else
		{
			city.regular();//calls location function for regular timezones
		}



		if (city.wish == "Kathmandu")
		{
			city.kathmandu2();//calls function of wish kathmandu
		}
		else
		{
			city.regular2();//calls wish function for regular timezones
		}
		

		/*dont need these right now, but keep so can develop in future*/
		//else if (city.wish == "Kabul")//is kabul, because weird time zone
		//{
		//	city.kabul();//calls function of kabul
		//}
		//else if (city.wish == "Calcutta" || city.wish == "NewDelhi" || city.wish == "Colombo")//weird timezone
		//{
		//	city.calcutta();//calls function because weird timezone
		//}

		d++;//increase count of program runs
		cout << endl << endl;//adds spaces between program runs
	} while (d < v);//keep repeating until # of times run is achieved
	return 0;
}


