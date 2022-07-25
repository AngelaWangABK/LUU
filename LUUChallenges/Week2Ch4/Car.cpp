//#include "Vehicle.h"
#include "Car.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

//Car constructor inheriting from Vehicle
Car::Car(string c_model, int c_year, int miles)
	: Vehicle(c_model, c_year)
	, miles(miles)
{}

void Car::Drive()
{
	cout << "Driving car... Vroom!\n";
}

void Car::Display()
{
	cout << "Model: " << model << ", "
		<< "Year: " << year << ", "
		<< "Mileage: " << miles << endl;
}