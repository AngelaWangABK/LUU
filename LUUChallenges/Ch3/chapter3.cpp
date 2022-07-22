#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::getline;
using std::string;
using std::vector;

//challenges for chapter 3

void leapYear() {
	int year = 0;
	cout << "Please enter a year: ";
	//input validation
	while (cin) {
		cin >> year;
		if (year < 0) {
			cin.clear();
		} else {
			break;
		}
	}
	//checking for leap year
	if (year % 400 == 0) {
		cout << "Leap year!";
	} else if (year % 4 == 0 && year % 100 != 0) {
		cout << "Leap year!";
	} else {
		cout << "Not a leap year!";
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

	int x = 0;

	cout << "Select function to test: \n" <<
		"1. Leap year\n" <<
		"2. Factors\n" <<
		"3. Maximum number in array\n";
	
	cin >> x;
	if (cin.fail() || x < 1 || x > 3) {
		cout << "Invalid input. Please enter 1, 2, or 3. \n";
	}
	
	switch (x) {
	case 1: leapYear();
		break;
	case 2: allFactors();
		break;
	case 3: maxArray();
		break;
	}
	
}