#include "Classes.h"

Country::Country()
{
	Name = "Ukraine";
	Area = 603548;
	StateLanguage = "Ukrainian";
	Population = 44130000;
	CreatedCountries++;
}

Country::Country(string CountryName, double CountryArea, string Language, int CountryPopulation)
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

void Country::SetCountryName(string CountryName)
{
	Name = CountryName;
};

double Country::GetCountryArea()
{
	return Area;
};

void Country::SetCountryArea(double CountryArea)
{
	Area = CountryArea;
};

string Country::GetCountryStateLanguage()
{
	return StateLanguage;
};

void Country::SetCountryStateLanguage(string Language)
{
	StateLanguage = Language;
};

int Country::GetCountryPopulation()
{
	return Population;
};

void Country::SetCountryPopulation(int CountryPopulation)
{
	Population = CountryPopulation;
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

Continent::Continent(string ContinentName, double ContinentArea, string ContinentHemisphere, vector<Country> ContinentCountries)
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

void Continent::SetContinentName(string ContinentName)
{
	Name = ContinentName;
};

double Continent::GetContinentArea()
{
	return Area;
};

void Continent::SetContinentArea(double ContinentArea)
{
	Area = ContinentArea;
};

string Continent::GetContinentHemisphere()
{
	return Hemisphere;
};

void Continent::SetContinentHemisphere(string ContinentHemisphere)
{
	const string Hemisphere = ContinentHemisphere;
};

vector<Country> Continent::GetContinentCountries()
{
	return Countries;
};

void Continent::SetContinentCountries(vector<Country> ContinentCountries)
{
	Countries = ContinentCountries;
};

River::River()
{
	Name = "Dnipro";
	Length = 2201;
	CreatedRivers++;
};

River::River(string RiverName, double RiverLength)
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

void River::SetRiverName(string RiverName)
{
	Name = RiverName;
};

double River::GetRiverLength()
{
	return Length;
};

void River::SetRiverLength(double RiverLength)
{
	Length = RiverLength;
};

Sea::Sea()
{
	Name = "Black Sea";
	Area = 436402;
	FlowingRivers.resize(2);
	FlowingRivers[0] = {"Dnipro", 2200};
	FlowingRivers[1] = {"Dnister", 1362};
	CreatedSeas++;
};
/*
Sea::Sea(string SeaName, double SeaArea, Continent SeaContinent, vector<River> ListOfRivers)
{
	Name = SeaName;
	Area = SeaArea;
	const Continent ContinentData = SeaContinent;
	FlowingRivers = ListOfRivers;
	CreatedSeas++;
};

Sea::Sea(const Sea& SeaData)
{
	Name = SeaData.Name;
	Area = SeaData.Area;
	const Continent ContinentData = SeaData.ContinentData;
	FlowingRivers = SeaData.FlowingRivers;
	CreatedSeas++;
};
*/
Sea::~Sea()
{
	CreatedSeas--;
};

string Sea::GetSeaName()
{
	return Name;
};

void Sea::SetSeaName(string SeaName)
{
	Name = SeaName;
};

double Sea::GetSeaArea()
{
	return Area;
};

void Sea::SetSeaArea(double SeaArea)
{
	Area = SeaArea;
};
/*
const Continent Sea::GetSeaContinent()
{
	return ContinentData;
};

void Sea::SetSeaContinent(Continent& SeaContinent)
{
	const Continent ContinentData(SeaContinent);
};
*/
vector<River> Sea::GetFlowingRivers()
{
	return FlowingRivers;
};

void Sea::SetFlowingRivers(vector<River> Rivers)
{
	FlowingRivers = Rivers;
};

Star::Star()
{
	Name = "Sun";
	Type = "G2V";
	DistanceToTheCenterOfTheGalaxy = 26000;
	CreatedStars++;
};

Star::Star(string StarName, string StarType, double Distance)
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

void Star::SetStarName(string StarName)
{
	Name = StarName;
};

string Star::GetStarType()
{
	return Type;
};

void Star::SetStarType(string StarType)
{
	Type = StarType;
};

double Star::GetDistanceToTheCenterOfTheGalaxy()
{
	return DistanceToTheCenterOfTheGalaxy;
};

void Star::SetDistanceToTheCenterOfTheGalaxy(double Distance)
{
	DistanceToTheCenterOfTheGalaxy = Distance;
};

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

Galaxy::Galaxy(string GalaxyName, int NumberInGalaxy, string Type, vector<Star> ListOfStars)
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

void Galaxy::SetGalaxyName(string GalaxyName)
{
	Name = GalaxyName;
};

int Galaxy::GetNumberOfTheStars()
{
	return NumberOfTheStars;
};

void Galaxy::SetNumberOfTheStars(int Number)
{
	NumberOfTheStars = Number;
};

string Galaxy::GetGalaxyType()
{
	return GalaxyType;
};

void Galaxy::SetGalaxyType(string Type)
{
	const string GalaxyType = Type;
};

vector<Star> Galaxy::GetStarsOfTheGalaxy()
{
	return Stars;
};

void Galaxy::SetStarsOfTheGalaxy(vector<Star> ListOfStars)
{
	Stars = ListOfStars;
};