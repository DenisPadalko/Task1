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
	Country(const string& CountryName, const double CountryArea, const string& Language, const int CountryPopulation);
	Country(const Country& CountryData);
	~Country();
	const string& GetCountryName();
	void SetCountryName(const string& CountryName);
	const double& GetCountryArea();
	void SetCountryArea(const double CountryArea);
	const string& GetCountryStateLanguage();
	void SetCountryStateLanguage(const string& Language);
	const int& GetCountryPopulation();
	void SetCountryPopulation(const int CountryPopulation);
	const int& GetCreatedCountries();
	void ShowInfo() const;
};

class Continent
{
private:
	string Name;
	double Area;
	const string Hemisphere = "Northern";
	vector<Country> Countries;
	static int CreatedContinents;
public:
	Continent();
	Continent(const string& ContinentName, const double ContinentArea, const string& ContinentHemisphere, const vector<Country>& ContinentCountries);
	Continent(const Continent& ContinentData);
	~Continent();
	const string& GetContinentName();
	void SetContinentName(const string& ContinentName);
	const double& GetContinentArea();
	void SetContinentArea(const double ContinentArea);
	const string& GetContinentHemisphere();
	void SetContinentHemisphere(const string& ContinentHemisphere);
	const vector<Country>& GetContinentCountries();
	void SetContinentCountries(const vector<Country>& ContinentCountries);
	const int& GetCreatedContinents();
	void ShowInfo() const;
};

class River
{
private:
	string Name;
	double Length;
	static int CreatedRivers;
public:
	River();
	River(const string& RiverName, const double RiverLength);
	River(const River& RiverData);
	~River();
	const string& GetRiverName();
	void SetRiverName(const string& RiverName);
	const double& GetRiverLength();
	void SetRiverLength(const double RiverLength);
	const int& GetCreatedRivers();
	void ShowInfo();
};

class Sea
{
private:
	string Name;
	double Area;
	const Continent* ContinentData;
	vector<River> FlowingRivers;
	static int CreatedSeas;
public:
	Sea();
	Sea(const string& SeaName, const double SeaArea, const Continent* SeaContinent, const vector<River>& ListOfRivers);
	Sea(const Sea& SeaData);
	~Sea();
	const string& GetSeaName();
	void SetSeaName(const string& SeaName);
	const double& GetSeaArea();
	void SetSeaArea(const double SeaArea);
	const Continent* GetSeaContinent();
	void SetSeaContinent(const Continent& SeaContinent);
	const vector<River>& GetFlowingRivers();
	void SetFlowingRivers(const vector<River>& Rivers);
	const int& GetCreatedSeas();
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
	Star(const string& StarName, const string& StarType, const double Distance);
	Star(const Star& StarData);
	~Star();
	const string& GetStarName();
	void SetStarName(const string& StarName);
	const string& GetStarType();
	void SetStarType(const string& StarType);
	const double& GetDistanceToTheCenterOfTheGalaxy();
	void SetDistanceToTheCenterOfTheGalaxy(const double Distance);
	const int& GetCreatedStars();
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
	Galaxy(const string& GalaxyName, const int NumberInGalaxy, const string& Type, const vector<Star>& ListOfStars);
	Galaxy(const Galaxy& GalaxyData);
	~Galaxy();
	const string& GetGalaxyName();
	void SetGalaxyName(const string& GalaxyName);
	const long long& GetNumberOfTheStars();
	void SetNumberOfTheStars(const int Number);
	const string& GetGalaxyType();
	void SetGalaxyType(const string& Type);
	const vector<Star>& GetStarsOfTheGalaxy();
	void SetStarsOfTheGalaxy(const vector<Star>& ListOfStars);
	const int& GetCreatedGalaxy();
	void ShowInfo();
};