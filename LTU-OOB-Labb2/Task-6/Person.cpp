#include "pch.h"
#include "Person.h"
#include <iostream>

namespace {
	using std::cout;
	using std::endl;
}

Person::Person()
{
	// Default constructor
}

Person::Person(string name, string address, string contact_number)
{
	this->name = name;
	this->address = address;
	this->contact_number = contact_number;
}

string Person::GetName()
{
	return name;
}

void Person::SetName(string name)
{
	this->name = name;
}

string Person::GetAddress()
{
	return address;
}

void Person::SetAddress(string address)
{
	this->address = address;
}

string Person::GetContact_number()
{
	return contact_number;
}

void Person::SetContact_number(string number)
{
	contact_number = number;
}

void Person::Print()
{
	cout << "Name of owner: " << name << endl;
	cout << "Owners address: " << address << endl;
	cout << "Owners contact number: " << contact_number << endl;
}

