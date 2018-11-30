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
	string carBrand, engineModelName, tireBrandName, ownerName, ownerAddress, ownerContactNmr;
	float horsepower, tireWidth;
	int cylinders, tireRimDiameter;

	cout << "We are creating your car! Let's begin with your name.\nWhat is your name? (text)\n>>";
	cin >> ownerName;

	cout << "What is your address? (text)\n>>";
	cin >> ownerAddress;

	cout << "What is your telephone number? (number)\n>>";
	cin >> ownerContactNmr;

	cout << "Please specify model name of your engine (text)\n>>";
	cin >> engineModelName;

	cout << "How much horsepower does it have? (number)\n>>";
	cin >> horsepower;

	cout << "How many cylinders does it have? (number)\n>>";
	cin >> cylinders;

	cout << "Moving on to the tires. What is the name of their brand? (text)\n>>";
	cin >> tireBrandName;

	cout << "What is their width? (number)\n>>";
	cin >> tireWidth;

	cout << "What is the diameter of their rim? (number)\n>>";
	cin >> tireRimDiameter;

	cout << "We are almost done! The only thing remaining is naming the brand of your car.\nName your brand: (text)\n>>";
	cin >> carBrand;

	cout << "\nGreat!! To summarize, here is your car:\n\n";

	Engine engine(engineModelName, horsepower, cylinders);
	Tire tire(tireBrandName, tireWidth, tireRimDiameter);
	Person owner(ownerName, ownerAddress, ownerContactNmr);
	Car car(engine, tire, carBrand, owner);

	car.Print();

	cin >> carBrand; //Pause purpose
}
