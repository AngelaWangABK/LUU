#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <string.h>

using std::cout;
using std::cin;
using std::getline;
using std::string;
using std::vector;
using std::stringstream;

//challenges for chapter 3

void LeapYear() 
{
	int year = 0;
	int month = 0;
	int day = 0;
	char ch;
	cout << "Please enter a year (YYYY-MM-DD): ";
	cin >> year >> ch >> month >> ch >> day;

	//checking for leap year
	if (year % 400 == 0) 
	{
		cout << year << " is a leap year!\n";
	} 
	else if (year % 4 == 0 && year % 100 != 0) 
	{
		cout << year << " is a leap year!\n";
	} 
	else 
	{
		cout << year << " is not a leap year!\n";
	}
}

void AllFactors() 
{
	int x = 0;
	cout << "Please enter a positive number: ";
	while (cin) 
	{
		cin >> x;
		if (x < 0)
		{
			cout << "Not a positive number. Please try again.\n";
			cin.clear();
		}
		else 
		{
			break;
		}
	}

	for (int i = 1; i <= x; i++) 
	{
		if (x % i == 0) 
		{
			cout << i << " ";
		}
	}
	cout << "\n";
}

//ch 4 - finds max int from array
void MaxArray() 
{
	int max = 0;
	int x = 0;
	vector<int> v;
	stringstream ss;
	string str;

	cout << "Please enter an array of integers: \n";
	getline(cin, str);
	ss << str;

	while (ss >> x) 
	{
		v.push_back(x);
	}

	for (int i : v) 
	{
		if (max < i) 
		{
			max = i;
		}
	}
	cout << max << "\n";
}

int main()
{

	MaxArray();
	LeapYear();
	AllFactors();

}