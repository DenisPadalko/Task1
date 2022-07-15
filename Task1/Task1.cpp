#include <iostream>
#include "Classes.h"

int main()
{
	Country Ukraine;
	Country Germany("Germany", 357588, "German", 83240000);
	vector<Country> Countries = {Ukraine, Germany};
	Continent Eurasia = {"Eurasia", 2750000, "Northern", Countries};
	return 0;
}