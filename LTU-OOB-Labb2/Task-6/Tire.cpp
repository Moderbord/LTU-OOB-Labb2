#include "pch.h"
#include "Tire.h"

Tire::Tire()
{

}

string Tire::GetBrand_name()
{
	return brand_name;
}

void Tire::SetBrand_name(string brand_name)
{
	this->brand_name = brand_name;
}

float Tire::GetWidth()
{
	return width;
}

void Tire::SetWidth(float width)
{
	this->width = width;
}

int Tire::GetRim_diameter()
{
	return rim_diameter;
}

void Tire::SetRim_diameter(int rim_diameter)
{
	this->rim_diameter = rim_diameter;
}
