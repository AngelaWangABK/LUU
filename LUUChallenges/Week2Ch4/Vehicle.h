#pragma once
#include <iostream>
#include <string>

using std::string;

class Vehicle 
{
public:
	string model;
	int year;

	Vehicle(string v_model, int v_year);
	~Vehicle();
	virtual void Drive();
	virtual void Display();
};