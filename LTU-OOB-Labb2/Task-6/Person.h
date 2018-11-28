#pragma once
#include <string>

namespace {
	using std::string;
}

class Person
{
public:
	Person();
	string GetName();
	void SetName(string name);
	string GetAddress();
	void SetAddress(string address);
	string GetContact_number();
	void SetContact_number(string number);

private:
	string name;
	string address;
	string contact_number;
};

