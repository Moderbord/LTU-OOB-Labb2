#pragma once
#include "Engine.h"
#include "Tire.h"
#include "Person.h"
#include <string>

namespace {
	using std::string;
}

class Car
{
public:
	Car();
	Engine GetEngine();
	void SetEngine(Engine engine);
	Tire GetTire(int i);
	Tire GetTires();
	void SetTire(Tire tire, int i);
	void SetTires(Tire tire);
	string GetBrand();
	void SetBrand(string brand);
	Person GetOwner();
	void SetOwner(Person owner);
	void Print();

private:
	Engine engine;
	Tire tires[4];
	string brand;
	Person owner;
};

