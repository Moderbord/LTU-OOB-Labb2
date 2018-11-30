#include "pch.h"
#include "Car.h"
#include <iostream>

namespace {
	using std::cout;
	using std::endl;
}

Car::Car(Engine engine, Tire tire, string brand, Person owner)
{
	this->engine = engine;
	this->SetTires(tire);
	this->brand = brand;
	this->owner = owner;
}

Engine Car::GetEngine()
{
	return engine;
}

void Car::SetEngine(Engine engine)
{
	this->engine = engine;
}

Tire Car::GetTire(int i)
{
	return *(tires -1 +i);		// Corrects index. If user want to retrive tire 1, this method send tire with index 0
}

Tire Car::GetTires()
{
	return *tires;				// Returns first tire in class
}

void Car::SetTire(Tire tire, int i)		// Sets one of the tires
{
	tires[--i] = tire;			// Corrects index. Setting tire '1-4' corresponds to index '0-3'
}

void Car::SetTires(Tire tire)			// Sets all tires
{
	for (int i = 0; i < 4; i++)
	{
		tires[i] = tire;
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

void Car::Print()
{
	cout << "Car brand name: " << brand << endl;
	engine.Print();
	tires->Print();
	owner.Print();
}
