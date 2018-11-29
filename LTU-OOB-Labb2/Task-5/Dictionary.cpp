#include "pch.h"
#include "Dictionary.h"

void Dictionary::insert(string key, string desc)
{
	pair<map<string, string>::iterator, bool> hit;

	hit = dictionary.insert(pair<string, string>(key, desc));
	if (hit.second == false)
	{
		cout << "Word already exist\n";
	}
}

void Dictionary::lookup(string key)
{
	map<string, string>::iterator hit = dictionary.find(key);

	if (hit != dictionary.end())
	{
		cout << dictionary[key] << endl;
		return;
	}
	cout << "Word was not found" << endl;
}

void Dictionary::load()
{

}

void Dictionary::save()
{
	ofstream file;
	file.open("dragons.txt", std::ios::out);		// Open for output oprations (rewrites the file)

	for (map<string, string>::iterator it = dictionary.begin(); it != dictionary.end(); it++)		// Iterates through the dictionary
	{
		file << it->first << "," << it->second << endl;
	}

	file.close();
}
