#include <iostream>
#include <cmath>
#include "Header.h"

using namespace std;

void main(void)
{
	Airport a("Detroit", "DTW");

	a.setgates(50);
	a.AddAirline("United");
	a.AddAirline("America");
	a.display();

	Airport b("Flint", "FNT");
	b.display();
	b.setData(3, 37);
	b.display();
}
