#include "cCar.h"

Car::Car(vector<Wheel*> _wheels, string _color)
{
	wheels = _wheels;
	color = _color;
	kmPerLiter = 20.0f;
}

string Car::toString()
{
	string txt = "I'M A CAR!\n";
	txt += "WHEELS:\n";
	vector<Wheel*>::iterator it;
	for(it = wheels.begin(); it != wheels.end(); ++it)
	{
		txt += (*it)->toString() + "\n";
	}
	txt += "COLOR: " + color;
	return txt;
}

string Car::getColor()
{
	return color;
}

void Car::setColor(string _color)
{
	color = _color;
}

float Car::getKmPerLiter()
{
	return kmPerLiter;
}