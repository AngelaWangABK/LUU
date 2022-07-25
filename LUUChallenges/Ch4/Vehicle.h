#pragma once
#include <iostream>
#include <string>

using std::string;

class Vehicle {
	
public:
	string model;
	int year;

	Vehicle(string v_model, int v_year);
	~Vehicle();
	virtual void Drive();
	virtual void Display();
};

class Car : public Vehicle {
public:
	int miles = 0;
	Car(string c_model, int c_year, int miles);
	void Drive() override;
	void Display() override;
};

class Boat : public Vehicle {
public:
	Boat(string model, int year);
	void Drive() override;
};

class Airplane : public Vehicle {
public:
	Airplane(string model, int year);
	void Drive() override;
};
