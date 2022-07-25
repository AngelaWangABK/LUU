#include "Airplane.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

//Airplane constructor inheriting from Vehicle
Airplane::Airplane(string model, int year)
	: Vehicle(model, year)
{}

void Airplane::Drive()
{
	cout << "Driving plane... Nyoom!\n";
}