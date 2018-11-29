#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>

namespace {
	using std::cin;
	using std::cout;
	using std::endl;
	using std::getline;
	using std::vector;
	using std::string;
	using std::map;
	using std::pair;
}

class Dictionary
{
public:
	void insert(string key, string desc);
	void lookup(string key);
private:
	map <string, string> dictionary;
};