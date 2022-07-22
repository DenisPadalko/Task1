#include "Classes.h"

Country::Country()
{
	Name = "Ukraine";
	Area = 603548;
	StateLanguage = "Ukrainian";
	Population = 44130000;
	CreatedCountries++;
}

Country::Country(const string& CountryName, const double CountryArea, const string& Language, const int CountryPopulation)
{
	Name = CountryName;
	Area = CountryArea;
	StateLanguage = Language;
	Population = CountryPopulation;
	CreatedCountries++;
}

Country::Country(const Country& CountryData)
{
	Name = CountryData.Name;
	Area = CountryData.Area;
	StateLanguage = CountryData.StateLanguage;
	Population = CountryData.Population;
	CreatedCountries++;
}

Country::~Country()
{
	CreatedCountries--;
};

string Country::GetCountryName()
{
	return Name;
};

void Country::SetCountryName(const string& CountryName)
{
	Name = CountryName;
};

double Country::GetCountryArea()
{
	return Area;
};

void Country::SetCountryArea(const double CountryArea)
{
	Area = CountryArea;
};

string Country::GetCountryStateLanguage()
{
	return StateLanguage;
};

void Country::SetCountryStateLanguage(const string& Language)
{
	StateLanguage = Language;
};

int Country::GetCountryPopulation()
{
	return Population;
};

void Country::SetCountryPopulation(const int CountryPopulation)
{
	Population = CountryPopulation;
};

int Country::GetCreatedCountries() 
{
	return CreatedCountries;
};

void Country::ShowInfo() const
{
	cout << "Name of country: " << Name << endl;
	cout << "Area of country: " << Area << endl;
	cout << "State langugae: " << StateLanguage << endl;
	cout << "Country population: " << Population << endl;
	cout << "---------------------" << endl;
};

Continent::Continent()
{
	Name = "Eurasia";
	Area = 2750000;
	const string Hemisphere = "Northern";
	Countries.resize(3);
	Countries[0] = {"Ukraine", 603548, "Ukrainian", 44130000};
	Countries[1] = {"Germany", 357588, "German", 83240000};
	Countries[2] = {"French Republic", 543940, "French", 67390000};
	CreatedContinents++;
};

Continent::Continent(const string& ContinentName, const double ContinentArea, const string& ContinentHemisphere, const vector<Country>& ContinentCountries)
{
	Name = ContinentName;
	Area = ContinentArea;
	const string Hemisphere = ContinentHemisphere;
	Countries = ContinentCountries;
	CreatedContinents++;
};

Continent::Continent(const Continent& ContinentData)
{
	Name = ContinentData.Name;
	Area = ContinentData.Area;
	const string Hemisphere = ContinentData.Hemisphere;
	Countries = ContinentData.Countries;
	CreatedContinents++;
};

Continent::~Continent() 
{
	CreatedContinents--;
};

string Continent::GetContinentName()
{
	return Name;
};

void Continent::SetContinentName(const string& ContinentName)
{
	Name = ContinentName;
};

double Continent::GetContinentArea()
{
	return Area;
};

void Continent::SetContinentArea(const double ContinentArea)
{
	Area = ContinentArea;
};

string Continent::GetContinentHemisphere()
{
	return Hemisphere;
};

void Continent::SetContinentHemisphere(const string& ContinentHemisphere)
{
	const string Hemisphere = ContinentHemisphere;
};

vector<Country> Continent::GetContinentCountries()
{
	return Countries;
};

void Continent::SetContinentCountries(const vector<Country>& ContinentCountries)
{
	Countries = ContinentCountries;
};

int Continent::GetCreatedContinents()
{
	return CreatedContinents;
};

void Continent::ShowInfo() const
{
	cout << "Continent name: " << Name << endl;
	cout << "Continent area: " << Area << endl;
	cout << "Continent hemisphere: " << Hemisphere << endl;
	cout << "Continent countries: " << endl << endl;
	for (int i = 0; i < Countries.size(); i++)
	{
		cout << i + 1 << endl;
		Countries[i].ShowInfo();
	}
	cout << "---------------------" << endl;
}

River::River()
{
	Name = "Dnipro";
	Length = 2201;
	CreatedRivers++;
};

River::River(const string& RiverName, const double RiverLength)
{
	Name = RiverName;
	Length = RiverLength;
	CreatedRivers++;
};

River::River(const River& RiverData)
{
	Name = RiverData.Name;
	Length = RiverData.Length;
	CreatedRivers++;
};

River::~River() 
{
	CreatedRivers--;
};

string River::GetRiverName()
{
	return Name;
};

void River::SetRiverName(const string& RiverName)
{
	Name = RiverName;
};

double River::GetRiverLength()
{
	return Length;
};

void River::SetRiverLength(const double RiverLength)
{
	Length = RiverLength;
};

int River::GetCreatedRivers() 
{
	return CreatedRivers;
};

void River::ShowInfo() 
{
	cout << "River name: " << Name << endl;
	cout << "River length: " << Name << endl;
	cout << "---------------------" << endl;
}

Sea::Sea()
{
	Name = "Black Sea";
	Area = 436402;
	ContinentData = new Continent();
	FlowingRivers.resize(2);
	FlowingRivers[0] = {"Dnipro", 2200};
	FlowingRivers[1] = {"Dnister", 1362};
	CreatedSeas++;
};

Sea::Sea(const string& SeaName, const double SeaArea, const Continent* SeaContinent, const vector<River>& ListOfRivers)
{
	Name = SeaName;
	Area = SeaArea;
	ContinentData = new Continent(*SeaContinent);
	FlowingRivers = ListOfRivers;
	CreatedSeas++;
};

Sea::Sea(const Sea& SeaData)
{
	Name = SeaData.Name;
	Area = SeaData.Area;
	ContinentData = new Continent(*SeaData.ContinentData);
	FlowingRivers = SeaData.FlowingRivers;
	CreatedSeas++;
};

Sea::~Sea()
{
	CreatedSeas--;
};

string Sea::GetSeaName()
{
	return Name;
};

void Sea::SetSeaName(const string& SeaName)
{
	Name = SeaName;
};

double Sea::GetSeaArea()
{
	return Area;
};

void Sea::SetSeaArea(const double SeaArea)
{
	Area = SeaArea;
};

const Continent* Sea::GetSeaContinent()
{
	return ContinentData;
};

void Sea::SetSeaContinent(const Continent& SeaContinent)
{
	const Continent* ContinentData(&SeaContinent);
};

vector<River> Sea::GetFlowingRivers()
{
	return FlowingRivers;
};

void Sea::SetFlowingRivers(const vector<River>& Rivers)
{
	FlowingRivers = Rivers;
};

int Sea::GetCreatedSeas() 
{
	return CreatedSeas;
};

void Sea::ShowInfo()
{
	cout << "Sea name: " << Name << endl;
	cout << "Sea area: " << Area << endl;
	cout << "Continent: " << endl;
	(*ContinentData).ShowInfo();
	cout << "Flowing rivers: " << endl;
	for (int i = 0; i < FlowingRivers.size(); i++)
	{
		cout << i + 1 << endl;
		FlowingRivers[i].ShowInfo();
	}
	cout << "---------------------" << endl;
}

Star::Star()
{
	Name = "Sun";
	Type = "G2V";
	DistanceToTheCenterOfTheGalaxy = 26000;
	CreatedStars++;
};

Star::Star(const string& StarName, const string& StarType, const double Distance)
{
	Name = StarName;
	Type = StarType;
	DistanceToTheCenterOfTheGalaxy = Distance;
	CreatedStars++;
};

Star::Star(const Star& StarData)
{
	Name = StarData.Name;
	Type = StarData.Type;
	DistanceToTheCenterOfTheGalaxy = StarData.DistanceToTheCenterOfTheGalaxy;
	CreatedStars++;
};

Star::~Star() 
{
	CreatedStars--;
};

string Star::GetStarName()
{
	return Name;
};

void Star::SetStarName(const string& StarName)
{
	Name = StarName;
};

string Star::GetStarType()
{
	return Type;
};

void Star::SetStarType(const string& StarType)
{
	Type = StarType;
};

double Star::GetDistanceToTheCenterOfTheGalaxy()
{
	return DistanceToTheCenterOfTheGalaxy;
};

void Star::SetDistanceToTheCenterOfTheGalaxy(const double Distance)
{
	DistanceToTheCenterOfTheGalaxy = Distance;
};

int Star::GetCreatedStars() 
{
	return CreatedStars;
};

void Star::ShowInfo() 
{
	cout << "Star name: " << Name << endl;
	cout << "Type of star: " << Type << endl;
	cout << "Distance to the center of the galaxy: " << DistanceToTheCenterOfTheGalaxy << endl;
	cout << "---------------------" << endl;
}

Galaxy::Galaxy()
{
	Name = "Milky Way";
	NumberOfTheStars = 300000000000;
	const string GalaxyType = "Barred spiral galaxy";
	Stars.resize(2);
	Stars[0] = {"Sirius", "A1", 20000};
	Stars[1] = {"Betelgeuse", "Red supergiant", 30000};
	CreatedGalaxy++;
};

Galaxy::Galaxy(const string& GalaxyName, const int NumberInGalaxy, const string& Type, const vector<Star>& ListOfStars)
{
	Name = GalaxyName;
	NumberOfTheStars = NumberInGalaxy;
	const string GalaxyType = Type;
	Stars = ListOfStars;
	CreatedGalaxy++;
};

Galaxy::Galaxy(const Galaxy& GalaxyData)
{
	Name = GalaxyData.Name;
	NumberOfTheStars = GalaxyData.NumberOfTheStars;
	const string GalaxyType = GalaxyData.GalaxyType;
	Stars = GalaxyData.Stars;
	CreatedGalaxy++;
};

Galaxy::~Galaxy() 
{
	CreatedGalaxy--;
};

string Galaxy::GetGalaxyName()
{
	return Name;
};

void Galaxy::SetGalaxyName(const string& GalaxyName)
{
	Name = GalaxyName;
};

long long Galaxy::GetNumberOfTheStars()
{
	return NumberOfTheStars;
};

void Galaxy::SetNumberOfTheStars(const int Number)
{
	NumberOfTheStars = Number;
};

string Galaxy::GetGalaxyType()
{
	return GalaxyType;
};

void Galaxy::SetGalaxyType(const string& Type)
{
	const string GalaxyType = Type;
};

vector<Star> Galaxy::GetStarsOfTheGalaxy()
{
	return Stars;
};

void Galaxy::SetStarsOfTheGalaxy(const vector<Star>& ListOfStars)
{
	Stars = ListOfStars;
};

int Galaxy::GetCreatedGalaxy() 
{
	return CreatedGalaxy;
};

void Galaxy::ShowInfo()
{
	cout << "Galaxy name: " << Name << endl;
	cout << "Number of the stars in galaxy: " << NumberOfTheStars << endl;
	cout << "Type of the galaxy: " << GalaxyType << endl;
	cout << "Stars in the galaxy: " << endl;
	for (int i = 0; i < Stars.size(); i++) 
	{
		cout << i + 1 << endl;
		Stars[i].ShowInfo();
	}
	cout << "---------------------" << endl;
}