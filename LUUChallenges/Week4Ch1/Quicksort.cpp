#include <iostream>
#include <vector>
#include <chrono>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::swap;
using std::chrono::duration;
using std::chrono::time_point;
using std::chrono::system_clock;


/*
Implement a sorting algorithm using the chrono library profile, sometimes using varying sample sizes
*/

int Partition(vector<int> &v, int start, int end)
{
	int pivot = end;
	int j = start;
	for (int i = start; i < end; ++i)
	{
		if (v[i] < v[pivot])
		{
			swap(v[i], v[j]);
			++j;
		}
	}
	swap(v[j], v[pivot]);
	return j;
}

void Quicksort(vector<int> &v, int start, int end)
{
	if (start < end)
	{
		int p = Partition(v, start, end);
		Quicksort(v, start, p - 1);
		Quicksort(v, p + 1, end);
	}
}

void PrintSorted(vector<int> v)
{
	for (int x : v)
	{
		cout << x << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> v = { 5, 2, 1, 4, 22 };
	time_point<system_clock> start = system_clock::now();
	Quicksort(v, 0, v.size()-1);
	PrintSorted(v);
	time_point<system_clock> end = system_clock::now();
	duration<double> elapsed = end - start;
	cout << "Elapsed time: " << elapsed.count();
	return 0;
}