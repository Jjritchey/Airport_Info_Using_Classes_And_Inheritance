#include "Header.h"
#include <iostream>
#include <string>

using namespace std;

Airport::Airport(string s, const char ids[4])
{
	airportName = s;
	for (int i = 0; i < sizeof(ids); i++)
	{
		id[i] = ids[i];
	}
	gates = 0;
	numOfAirlines = 0;
}

void Airport::display()
{
	cout << "You're at: " << airportName << " airport\n";
	cout << "Aiport code is: ";
	for (int i = 0; i < sizeof(id); i++)
	{
		if (id[i] == '\n')
			continue;
		else
			cout << id[i];
	}
	cout << "\nThere are " << gates << " gates at this airport\n";
	cout << "There are currntly " << numOfAirlines << " airlines that use this airport\n";
	cout << "Here are the airlines: \n";
	for (int j = 0; j < sizeof(airlineName); j++)
	{
		if (airlineName[j] == "")
			break;
		else
			cout << airlineName[j] << endl;
	}
	cout << "\n\n";
}

void Airport::AddAirline(string s)
{
	if (s.size() > 25)
	{
		cout << "\nAirline name is too long, please try adding again with fewer characters\n";
		return;
	}

	for (int j = 0; j < 10; j++)
	{
		if (airlineName[j] == "")
		{
			airlineName[j] = s;
			numOfAirlines++;
			break;
		}
		else
		{
			continue;
		}
	}
}

void Airport::setgates(int g)
{
	gates = g;
}

void Airport::setData(int a, int g)
{
	gates = g;
	string s;

	if (a > 10)
	{
		cout << "There can only be 10 airlines, you have entered " << a << "\nPlease enter a number less than or equal to 10\n";
		return;
	}

	for (int i = 0; i < a; i++)
	{
		cout << "Please enter the name of airline " << (i+1) << ": \n";
		cin >> s;
		AddAirline(s);
	}
	cout << "\n";
}