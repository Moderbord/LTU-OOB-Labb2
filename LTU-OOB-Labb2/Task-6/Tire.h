#pragma once
#include <string>

namespace {
	using std::string;
}

class Tire
{
public:
	Tire();
	Tire(string brand_Name, float width, int rim_diameter);
	string GetBrand_name();
	void SetBrand_name(string brand_name);
	float GetWidth();
	void SetWidth(float width);
	int GetRim_diameter();
	void SetRim_diameter(int rim_diameter);
	void Print();

private:
	string brand_name;
	float width;
	int rim_diameter;
};

