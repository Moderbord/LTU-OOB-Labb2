#include "pch.h"
#include <iostream>
#include <string>

namespace {
	using std::cout;
	using std::string;
}

void swapNums(int **a, int **b);

int main()
{
	int x = 5;
	int y = 7;

	int *ptr1 = &x;			// The adress of 'x'
	int *ptr2 = &y;

	swapNums(&ptr1, &ptr2);	// Sends adress of adress

}

void swapNums(int **a, int **b)	// Takes adress of adress
{
	int *z = *a;				// 'z' saves value of inner adress of 'a' (adress to 5)

	*a = *b;					// 'a' becomes inner adress of 'b' (adress to 7)
	*b = z;						// 'b' becomes inner adress of 'z' (adress to 5)
}
