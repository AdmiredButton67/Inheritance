#include "cCompactCar.h"

CompactCar::CompactCar(vector<Wheel*> _wheels, string _color, int _doors) : Car(_wheels, _color)
{
	doors = _doors;
}

string CompactCar::toString()
{
	string txt = Car::toString();
	txt += "\nI'M A COMPACT CAR!";
	txt += "\nDOORS:" + to_string(doors);
	return txt;
}

int CompactCar::getDoors()
{
	return doors;
}

void CompactCar::setDoors(int _doors)
{
	doors = _doors;
}

float CompactCar::getKmPerLiter()
{
	return Car::getKmPerLiter() * 1.1f;
}
