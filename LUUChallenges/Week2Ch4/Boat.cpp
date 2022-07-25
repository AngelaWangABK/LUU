#include "Boat.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

//Boat constructor inheriting from Vehicle
Boat::Boat(string model, int year)
	: Vehicle(model, year)
{}

void Boat::Drive()
{
	cout << "Driving boat... Splash!\n";
}