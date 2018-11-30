#include "pch.h"
#include "Dictionary.h"

void Dictionary::addWord(string key, string desc)
{
	pair<map<string, string>::iterator, bool> hit;					// Pair with iterator and bool

	hit = dictionary.insert(pair<string, string>(key, desc));		// Tries to insert key/value-pair in map, return false if word exists
	if (hit.second == false)
	{
		cout << "Word already exist\n";
	}
}

void Dictionary::lookupWord(string key)
{
	map<string, string>::iterator hit = dictionary.find(key);		// Use built-in function .find() to check if word exists. Return false otherwise

	if (hit != dictionary.end())
	{
		cout << dictionary[key] << endl;							// Word was found, returns value
		return;
	}
	cout << "Word was not found" << endl;
}

void Dictionary::loadDictionary()
{
	string line, key, value;
	ifstream file("dragons.txt");

	while (getline(file, line))
	{
		std::size_t separator = line.find(',');		// index if the ',' character

		key = line.substr(0, separator);			// Key evaluates from start of line up to separator
		value = line.substr(separator + 1);			// Value evaluates from after separator to end

		this->addWord(key, value);					// Adds key/value-pair to dictionary
	}

	file.close();
}

void Dictionary::saveDictionary()
{
	ofstream file;
	file.open("dragons.txt", std::ios::out);		// Open for output oprations (rewrites the file)

	for (map<string, string>::iterator it = dictionary.begin(); it != dictionary.end(); it++)		// Iterates through the dictionary
	{
		file << it->first << "," << it->second << endl;
	}

	file.close();
}
