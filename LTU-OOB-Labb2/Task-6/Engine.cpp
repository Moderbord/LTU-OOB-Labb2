#include "pch.h"
#include "Engine.h"
#include <iostream>

namespace {
	using std::cout;
	using std::endl;
}

Engine::Engine()
{
	// Default constructor
}

Engine::Engine(string modelname, float horsepower, int num_of_cylinders)
{
	this->modelname = modelname;
	this->horsepower = horsepower;
	this->number_of_cylinders = num_of_cylinders;
}

string Engine::GetModelname()
{
	return modelname;
}

void Engine::SetModelname(string modelname)
{
	this->modelname = modelname;
}

float Engine::GetHorsepower()
{
	return horsepower;
}

void Engine::SetHorsepower(float horsepower)
{
	this->horsepower = horsepower;
}

int Engine::GetNumber_of_cylinders()
{
	return number_of_cylinders;
}

void Engine::SetNumber_of_cylinders(int number_of_cylinders)
{
	this->number_of_cylinders = number_of_cylinders;
}

void Engine::Print()
{
	cout << "Engine model name: " << modelname << endl;
	cout << "Engine horsepower: " << horsepower << endl;
	cout << "Cylinders in engine: " << number_of_cylinders << endl;
}
