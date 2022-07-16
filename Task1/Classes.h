#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Country
{
private:
	string Name;
	double Area;
	string StateLanguage;
	int Population;
	static int CreatedCountries;
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
	void ShowInfo();
};

class Continent
{
private:
	string Name;
	double Area;
	const string Hemisphere;
	vector<Country> Countries;
	static int CreatedContinents;
public:
	Continent();
	Continent(string ContinentName, double ContinentArea, string ContinentHemisphere, vector<Country> ContinentCountries);
	Continent(const Continent& ContinentData);
	~Continent();
	string GetContinentName();
	void SetContinentName(string ContinentName);
	double GetContinentArea();
	void SetContinentArea(double ContinentArea);
	string GetContinentHemisphere();
	void SetContinentHemisphere(string ContinentHemisphere);
	vector<Country> GetContinentCountries();
	void SetContinentCountries(vector<Country> ContinentCountries);
	void ShowInfo();
};

class River
{
private:
	string Name;
	double Length;
	static int CreatedRivers;
public:
	River();
	River(string RiverName, double RiverLength);
	River(const River& RiverData);
	~River();
	string GetRiverName();
	void SetRiverName(string RiverName);
	double GetRiverLength();
	void SetRiverLength(double RiverLength);
	void ShowInfo();
};

class Sea
{
private:
	string Name;
	double Area;
	static const Continent* ContinentData;
	vector<River> FlowingRivers;
	static int CreatedSeas;
public:
	Sea();
	Sea(string SeaName, double SeaArea, Continent* SeaContinent, vector<River> ListOfRivers);
	Sea(const Sea& SeaData);
	~Sea();
	string GetSeaName();
	void SetSeaName(string SeaName);
	double GetSeaArea();
	void SetSeaArea(double SeaArea);
	const Continent* GetSeaContinent();
	void SetSeaContinent(Continent& SeaContinent);
	vector<River> GetFlowingRivers();
	void SetFlowingRivers(vector<River> Rivers);
	void ShowInfo();
};

class Star
{
private:
	string Name, Type;
	double DistanceToTheCenterOfTheGalaxy;
	static int CreatedStars;
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
	void ShowInfo();
};

class Galaxy
{
private:
	string Name;
	long long NumberOfTheStars;
	const string GalaxyType;
	vector<Star> Stars;
	static int CreatedGalaxy;
public:
	Galaxy();
	Galaxy(string GalaxyName, int NumberInGalaxy, string Type, vector<Star> ListOfStars);
	Galaxy(const Galaxy& GalaxyData);
	~Galaxy();
	string GetGalaxyName();
	void SetGalaxyName(string GalaxyName);
	long long GetNumberOfTheStars();
	void SetNumberOfTheStars(int Number);
	string GetGalaxyType();
	void SetGalaxyType(string Type);
	vector<Star> GetStarsOfTheGalaxy();
	void SetStarsOfTheGalaxy(vector<Star> ListOfStars);
	void ShowInfo();
};