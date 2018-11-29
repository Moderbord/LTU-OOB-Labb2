#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>

namespace {
	using std::cin;
	using std::cout;
	using std::endl;
	using std::getline;
	using std::ofstream;
	using std::ifstream;
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
	void load();
	void save();
private:
	map <string, string> dictionary;
};