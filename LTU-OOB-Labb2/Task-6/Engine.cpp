#include "pch.h"
#include "Engine.h"

Engine::Engine()
{

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
