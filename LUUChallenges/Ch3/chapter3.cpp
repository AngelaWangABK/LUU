#include <iostream>
#include <vector>
#include <string>
#include <string.h>

using std::cout;
using std::cin;
using std::getline;
using std::string;
using std::vector;
using std::stoi;

//challenges for chapter 3

void leapYear() {
	int year = 0;
	int month = 0;
	int day = 0;
	char ch;
	cout << "Please enter a year (YYYY-MM-DD): ";
	cin >> year >> ch >> month >> ch >> day;

	//checking for leap year
	if (year % 400 == 0) {
		cout << year << " is a leap year!";
	} else if (year % 4 == 0 && year % 100 != 0) {
		cout << year << " is a leap year!";
	} else {
		cout << year << " is not a leap year!";
	}
}

void allFactors() {
	int x = 0;
	cout << "Please enter a positive number: ";
	while (cin) {
		cin >> x;
		if (x < 0) {
			cout << "Not a positive number. Please try again.\n";
			cin.clear();
		} else {
			break;
		}
	}

	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			cout << i << " ";
		}
	}
}

//ch 4 - finds max int from array
void maxArray() {
	int i = 0;	
	vector<int> v;
	cout << "Please enter an array of integers: \n";
	while (cin) {
		cin >> i;
		//input validation
		if (cin.fail()) {
			cout << "Invalid input. Please try again.\n";
			cin.clear();
			cin.ignore(10000, '\n');
		} else {
			v.push_back(i);
			break;
		}
	}
	
	int max = 0;
	for (int i : v) {
		if (max < i) {
			max = i;
		}
	}
	cout << max;
}

int main() {

	leapYear();
	allFactors();
	maxArray();
	
}