#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

//challenges for chapter 3

void leapYear() {
	int year = 0;
	cout << "Please enter a year: ";
	cin >> year;
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

int main() {
	leapYear();
	allFactors();
}