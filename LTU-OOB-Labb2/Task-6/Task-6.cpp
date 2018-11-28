#include "pch.h"
#include "Car.h"
#include "Engine.h"
#include "Tire.h"
#include "Person.h"
#include <string>
#include <iostream>

namespace {
	using std::cout;
	using std::cin;
	using std::string;
}

int main()
{
    
	Car car;
	Engine engine;
	Tire tire;
	Tire sTire;
	Person person;

	person.SetAddress("Staregatan 2A");
	person.SetContact_number("0703903723");
	person.SetName("Sparkles");

	tire.SetBrand_name("Obama's finest");
	tire.SetRim_diameter(45);
	tire.SetWidth(14.0f);
	
	sTire.SetBrand_name("Spirit");
	sTire.SetRim_diameter(30);
	sTire.SetWidth(13.0f);

	engine.SetHorsepower(750.5f);
	engine.SetModelname("ÖPH's verkstad");
	engine.SetNumber_of_cylinders(8);

	car.SetBrand("Swingers Mobile");
	car.SetEngine(engine);
	car.SetOwner(person);
	car.SetTires(tire);
	car.SetTire(sTire, 2);
	car.SetTire(sTire, 3);
}
