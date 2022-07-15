#pragma once
#include <string>

using namespace std;
class Country
{
private:
	string Name;
	double Area;
	string StateLanguage;
	int Population;
public:
	Country();
	Country(string CountryName, double CountryArea, string Language, int CountryPopulation);
	Country(const Country& CountryData);
	~Country();
	string GetCountryName();
	void SetCountryName(string CountryName);
	double GetCountryArea();
	void SetCountryArea(double CountryArea);
	string GetCountryStateLanguage();
	void SetCountryStateLanguage(string Language);
	int GetCountryPopulation();
	void SetCountryPopulation(int CountryPopulation);
};

class Continent
{
private:
	string Name;
	double Area;
	static const string Hemisphere;
	Country* Countries;
private:
	Continent();
	Continent(string ContinentName, double ContinentArea, string ContinentHemisphere, Country* ContinentCountries);
	Continent(const Continent& ContinentData);
	~Continent();
	string GetContinentName();
	void SetContinentName(string ContinentName);
	double GetContinentArea();
	void SetContinentArea(double ContinentArea);
	string GetContinentHemisphere();
	void SetContinentHemisphere(string ContinentHemisphere);
	Country* GetContinentCountries();
	void SetContinentCountries(Country* ContinentCountries);
};

class River
{
private:
	string Name;
	double Length;
public:
	River();
	River(string RiverName, double RiverLength);
	River(const River& RiverData);
	~River();
	string GetRiverName();
	void SetRiverName(string RiverName);
	double GetRiverLength();
	void SetRiverLength(double RiverLength);
};

class Sea
{
private:
	string Name;
	double Area;
	static const Continent ContinentData;
	River* FlowingRivers;
public:
	Sea();
	Sea(string SeaName, double SeaArea, Continent SeaContinent, River* ListOfRivers);
	Sea(const Sea& SeaData);
	~Sea();
	string GetSeaName();
	void SetSeaName(string SeaName);
	double GetSeaArea();
	void SetSeaArea(double SeaArea);
	Continent GetSeaContinent();
	void SetSeaContinent(Continent SeaContinent);
	River* GetFlowingRivers();
	void SetFlowingRivers(River* Rivers);
};

class Star
{
private:
	string Name, Type;
	double DistanceToTheCenterOfTheGalaxy;
public:
	Star();
	Star(string StarName, string StarType, double Distance);
	Star(const Star& StarData);
	~Star();
	string GetStarName();
	void SetStarName(string StarName);
	string GetStarType();
	void SetStarType(string StarType);
	double GetDistanceToTheCenterOfTheGalaxy();
	void SetDistanceToTheCenterOfTheGalaxy(double Distance);
};

class Galaxy
{
private:
	string Name;
	int NumberOfTheStars;
	static const string GalaxyType;
	Star* Stars;
public:
	Galaxy();
	Galaxy(string GalaxyName, int NumberInGalaxy, string Type, Star* ListOfStars);
	Galaxy(const Galaxy& GalaxyData);
	~Galaxy();
	string GetGalaxyName();
	void SetGalaxyName(string GalaxyName);
	int GetNumberOfTheStars();
	void SetNumberOfTheStars(int Number);
	string GetGalaxyType();
	void SetGalaxyType(string Type);
	Star* GetStarsOfTheGalaxy();
	void SetStarsOfTheGalaxy(Star* ListOfStars);
};