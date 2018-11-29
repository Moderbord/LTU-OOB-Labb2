#pragma once
#include <string>

namespace {
	using std::string;
}

class Engine
{
public:
	Engine();
	string GetModelname();
	void SetModelname(string modelname);
	float GetHorsepower();
	void SetHorsepower(float horsepower);
	int GetNumber_of_cylinders();
	void SetNumber_of_cylinders(int number_of_cylinders);
	void Print();

private:
	string modelname;
	float horsepower;
	int number_of_cylinders;
};

