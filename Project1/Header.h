#pragma once
#include <iostream>

using namespace std;

class Airport
{
private:
	string airportName;
	char id[4];
	int numOfAirlines;
	string airlineName[10];
	int gates;

public:
	Airport(string, const char ids[]);
	void display();
	void AddAirline(string);
	void setgates(int);
	void setData(int, int);

};

