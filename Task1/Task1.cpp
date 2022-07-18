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
	cout << "Objects of the Country class" << endl << endl;
	Ukraine.ShowInfo();
	Country Germany("Germany", 357588, "German", 83240000);
	Germany.ShowInfo();
	cout << "Object of the Continent class" << endl << endl;
	Continent Eurasia;
	Eurasia.ShowInfo();
	cout << "Object of the River class" << endl << endl;
	River Dnipro;
	Dnipro.ShowInfo();
	cout << "Testing of the copy constructor" << endl << endl;
	River CopyOfDnipro(Dnipro);
	CopyOfDnipro.ShowInfo();
	cout << "Object of the Sea class" << endl << endl;
	Sea BlackSea;
	BlackSea.ShowInfo();
	cout << "Object of the Star class" << endl << endl;
	Star Sun;
	Sun.ShowInfo();
	cout << "Object of the Galaxy class" << endl << endl;
	Galaxy MilkyWay;
	MilkyWay.ShowInfo();
	cout << "Created objects of the Country class: " << Ukraine.GetCreatedCountries() << endl;
	cout << "Created objects of the Continent class: " << Eurasia.GetCreatedContinents() << endl;
	cout << "Created objects of the River class: " << Dnipro.GetCreatedRivers() << endl;
	cout << "Created objects of the Sea class: " << BlackSea.GetCreatedSeas() << endl;
	cout << "Created objects of the Star class: " << Sun.GetCreatedStars() << endl;
	cout << "Created objects of the Galaxy class: " << MilkyWay.GetCreatedGalaxy() << endl;
	return 0;
}