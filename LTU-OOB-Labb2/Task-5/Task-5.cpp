#include "pch.h"
#include "Dictionary.h"
#include <iostream>

int main()
{
	Dictionary dict;

	dict.insert("Drake", "Snygg");
	dict.insert("Alliza", "Best EU player");
	dict.insert("Skog", "Barrigt");
	dict.insert("Sparkles", "Shiny and effective");

	while (true)
	{
		cout << "===================" << endl;
		cout << "Dictionary - Map" << endl;
		cout << "1. Insert" << endl;
		cout << "2. Lookup" << endl;
		cout << "3. Exit" << endl;
		cout << "\n>> ";

		string input, word, desc;
		cin >> input;

		switch (input[0])
		{
		case '1':
			cout << "Word to enter: ";
			cin >> word;

			cout << "Description of word: ";
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		// safer way to ignore '\n' in the buffer
			getline(cin, desc);

			dict.insert(word, desc);
			break;

		case '2':
			cout << "Word to lookup: ";
			cin >> word;

			dict.lookup(word);
			break;

		case '3':
			cout << "Closing..";
			return false;

		default:
			break;

		}
	}
}