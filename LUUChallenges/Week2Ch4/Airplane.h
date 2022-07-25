#pragma once
#include "Vehicle.h"
#include <iostream>
#include <string>

using std::string;

class Airplane : public Vehicle
{
public:
	Airplane(string model, int year);
	void Drive() override;
};