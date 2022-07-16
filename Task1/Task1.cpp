#include "Classes.h"

int Country::CreatedCountries = 0;
int Continent::CreatedContinents = 0;
int River::CreatedRivers = 0;
int Sea::CreatedSeas = 0;
int Star::CreatedStars = 0;
int Galaxy::CreatedGalaxy = 0;

int main()
{
	Country Ukraine;
	Ukraine.ShowInfo();
	Country Germany("Germany", 357588, "German", 83240000);
	Continent Eurasia;
	Eurasia.ShowInfo();
	River Dnipro;
	River CopyOfDnipro(Dnipro);
	Sea BlackSea;
	return 0;
}