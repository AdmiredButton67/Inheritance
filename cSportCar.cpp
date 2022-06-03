#include "cSportCar.h"

SportCar::SportCar(vector<Wheel*> _wheels, string _color, int _horsepower) : Car(_wheels, _color)
{
	horsepower = _horsepower;
}

string SportCar::toString()
{
	string txt = Car::toString();
	txt += "\nI'M A SPORT CAR!";
	txt += "\nHP:" + to_string(horsepower);
	return txt;
}

int SportCar::getHorsepower()
{
	return horsepower;
}

void SportCar::setHorsepower(int _horsepower)
{
	horsepower = _horsepower;
}

float SportCar::getKmPerLiter()
{
	return Car::getKmPerLiter() * 1.3f;
}
