#include "pch.h"
#include <iostream>
#include <string>

namespace {
	using std::cout;
	using std::string;
}

void swapNums(int *a, int *b);

int main()
{
	int x = 5;
	int y = 7;

	swapNums(&x, &y);	// Sends adress

}

void swapNums(int *a, int *b)	// Takes deferenced adress
{
	int z = *a;		// 'z' = deRef of 'a' (5)

	*a = *b;		// Value of adress at 'a' becomes value of adress at 'b' (7)
	*b = z;			// Value of adress at 'b' becomes value of 'z' (5)

}
