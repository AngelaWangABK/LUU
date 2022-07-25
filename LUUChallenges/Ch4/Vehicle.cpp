#include "Vehicle.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

/*
Create a vehicle base class, and from that create the necessary classes to get to boat, car and airplane.
All classes should have an overridable function named Drive.
Create an object of each and demonstrate the Drive function works.
*/

//Vehicle constructor
Vehicle::Vehicle(string v_model, int v_year) 
{
	model = v_model;
	year = v_year;
}

Vehicle::~Vehicle() 
{}

void Vehicle::Drive() 
{
	cout << "Driving vehicle..." << endl;
}

void Vehicle::Display() 
{
	cout << "Model: " << model << ", "
	<< "Year: " << year << endl;
}

//Car constructor inheriting from Vehicle
Car::Car(string c_model, int c_year, int miles)
	: Vehicle(c_model, c_year)
	, miles (miles) 
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

//Boat constructor inheriting from Vehicle
Boat::Boat(string model, int year) 
	 : Vehicle(model, year) 
{}

void Boat::Drive() 
{
	cout << "Driving boat... Splash!\n";
}

//Airplane constructor inheriting from Vehicle
Airplane::Airplane(string model, int year) 
		 : Vehicle(model, year) 
{}

void Airplane::Drive() 
{
	cout << "Driving plane... Nyoom!\n";
}

int main() 
{

	Car c1("Tesla", 2031, 20000);
	c1.Drive();
	c1.Display();

	Boat b1("Yamaha", 2004);
	b1.Drive();
	b1.Display();

	Airplane a1("Boeing", 2008);
	a1.Drive();
	a1.Display();

	return 0;
}