#pragma once
#include <string>

namespace {
	using std::string;
}

class Person
{
public:
	Person();
	Person(string name, string address, string contact_number);
	string GetName();
	void SetName(string name);
	string GetAddress();
	void SetAddress(string address);
	string GetContact_number();
	void SetContact_number(string number);
	void Print();

private:
	string name;
	string address;
	string contact_number;
};

