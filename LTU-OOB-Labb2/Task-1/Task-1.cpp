#include "pch.h"
#include <iostream>
#include <string>

namespace {
	using std::cout;
	using std::string;
}

int length(char s[]);

int main()
{
	char arr[] = "computer";
	int wordLen = length(arr);
	cout << wordLen;
}

int length(char s[])
{
	char *ptr = s; 		// Point to first element
	int count = 0;

	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}

	return count;
}