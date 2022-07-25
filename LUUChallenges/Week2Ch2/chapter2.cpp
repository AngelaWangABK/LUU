#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

//challenges for chapter 2
double Avg(int sum)
{
	return (double)sum / 3;
}

void SumAvg()
{
	vector<int> input;
	int x = 0;
	int sum = 0;
	cout << "Please enter 3 numbers: \n";
	for (int i = 0; i < 3; i++) 
	{
		cin >> x;
		input.push_back(x);
		sum += x;
	}
	cout << "Sum: " << sum << "\n";
	cout << "Average: " << Avg(sum) << "\n";
}

void Cubed() 
{
	int x = 0;
	cout << "Value to be cubed: " << "\n";
	cin >> x;
	cout << "Cubed result: " << x * x * x;
}

int main() 
{
	SumAvg();
	Cubed();

	return 0;
}

