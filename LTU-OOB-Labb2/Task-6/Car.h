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
	Tire* GetTires();
	void SetTires(Tire tire);
	string GetBrand();
	void SetBrand(string brand);
	Person GetOwner();
	void SetOwner(Person owner);

private:
	Engine engine;
	Tire *tires[4];
	string brand;
	Person owner;
};

