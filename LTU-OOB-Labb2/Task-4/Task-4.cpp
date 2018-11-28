#include "pch.h"
#include <iostream>

namespace {
	using std::cout;
	using std::cin;
}

int average_salary(int *arr, int n);

int main()
{
	int numEmpl;

	cout << "How many employees?\n>>";
	cin >> numEmpl;

	int *arr = new int[numEmpl];
	for (int i = 0; i < numEmpl; i++)
	{
		cout << "Enter salary for employee #" << i + 1 << "\n>>";
		cin >> arr[i];
	}

	int avg = average_salary(arr, numEmpl);

	cout << "Average salary is: " << avg;

	delete[] arr;
}

int average_salary(int *arr, int n)
{
	int totalSalary = 0;

	for (int i = 0; i < n; i++)
	{
		totalSalary += arr[i];
	}

	return totalSalary / n;
}

