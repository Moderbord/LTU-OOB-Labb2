#include "pch.h"
#include "Car.h"

Car::Car()
{
}

Engine Car::GetEngine()
{
	return engine;
}

void Car::SetEngine(Engine engine)
{
	this->engine = engine;
}

Tire* Car::GetTires()
{
	return *tires;
}

void Car::SetTires(Tire tire)
{
	for (int i = 0; i < 4; i++)
	{
		*tires[i] = tire;
	}
}

string Car::GetBrand()
{
	return brand;
}

void Car::SetBrand(string brand)
{
	this->brand = brand;
}

Person Car::GetOwner()
{
	return Person();
}

void Car::SetOwner(Person owner)
{
	this->owner = owner;
}
