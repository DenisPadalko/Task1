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
	const string& GetCountryName() const;
	void SetCountryName(const string& CountryName);
	const double GetCountryArea() const;
	void SetCountryArea(const double CountryArea);
	const string& GetCountryStateLanguage() const;
	void SetCountryStateLanguage(const string& Language);
	const int GetCountryPopulation() const;
	void SetCountryPopulation(const int CountryPopulation);
	const int GetCreatedCountries() const;
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
	const string& GetContinentName() const;
	void SetContinentName(const string& ContinentName);
	const double GetContinentArea() const;
	void SetContinentArea(const double ContinentArea);
	const string& GetContinentHemisphere() const;
	void SetContinentHemisphere(const string& ContinentHemisphere);
	const vector<Country>& GetContinentCountries() const;
	void SetContinentCountries(const vector<Country>& ContinentCountries);
	const int GetCreatedContinents() const;
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
	const string& GetRiverName() const;
	void SetRiverName(const string& RiverName);
	const double GetRiverLength() const;
	void SetRiverLength(const double RiverLength);
	const int GetCreatedRivers() const;
	void ShowInfo() const;
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
	const string& GetSeaName() const;
	void SetSeaName(const string& SeaName);
	const double GetSeaArea() const;
	void SetSeaArea(const double SeaArea);
	const Continent* GetSeaContinent() const;
	void SetSeaContinent(const Continent& SeaContinent);
	const vector<River>& GetFlowingRivers() const;
	void SetFlowingRivers(const vector<River>& Rivers);
	const int GetCreatedSeas() const;
	void ShowInfo() const;
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
	const string& GetStarName() const;
	void SetStarName(const string& StarName);
	const string& GetStarType() const;
	void SetStarType(const string& StarType);
	const double GetDistanceToTheCenterOfTheGalaxy() const;
	void SetDistanceToTheCenterOfTheGalaxy(const double Distance);
	const int GetCreatedStars() const;
	void ShowInfo() const;
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
	const string& GetGalaxyName() const;
	void SetGalaxyName(const string& GalaxyName);
	const long long GetNumberOfTheStars() const;
	void SetNumberOfTheStars(const int Number);
	const string& GetGalaxyType() const;
	void SetGalaxyType(const string& Type);
	const vector<Star>& GetStarsOfTheGalaxy() const;
	void SetStarsOfTheGalaxy(const vector<Star>& ListOfStars);
	const int GetCreatedGalaxy() const;
	void ShowInfo() const;
};