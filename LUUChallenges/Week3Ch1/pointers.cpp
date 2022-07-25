#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

/*
Write a program that asks the user to enter integers to be stored in the variables 'a' and 'b'. 
Then create two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB, and display them.
Take an input variable and display the same value by pointer.
*/

void PointerVal()
{
	string s = "";
	cout << "Enter any input: ";
	cin >> s;
	string* str = &s;
	cout << "Displaying input by pointer: " << *str;
}

void TwoPointers()
{
	int a = 0;
	int b = 0;

	cout << "Please enter two integers: ";
	cin >> a >> b;
	int* ptrA = &a;
	int* ptrB = &b;

	cout << "Pointer A: " << *ptrA << endl;
	cout << "Pointer B: " << *ptrB << endl;
}

int main()
{
	TwoPointers();
	PointerVal();
	return 0;
}