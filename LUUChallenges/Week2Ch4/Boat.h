#pragma once
#include "Vehicle.h"
#include <iostream>
#include <string>

using std::string;

class Boat : public Vehicle
{
public:
	Boat(string model, int year);
	void Drive() override;
};