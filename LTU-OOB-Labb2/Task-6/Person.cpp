#include "pch.h"
#include "Person.h"

Person::Person()
{

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

