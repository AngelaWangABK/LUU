#pragma once
#include "Vehicle.h"
#include <iostream>
#include <string>

using std::string;

class Car : public Vehicle
{
public:
	int miles = 0;
	Car(string c_model, int c_year, int miles);
	void Drive() override;
	void Display() override;
};