#include "cWheel.h"

Wheel::Wheel()
{
	size = 0;
}

Wheel::Wheel(float _size)
{
	size = _size;
}

float Wheel::getSize()
{
	return size;
}

void Wheel::setSize(float _size)
{
	size = _size;
}

string Wheel::toString()
{
	string txt = "I'M A WHEEL!    SIZE: " + to_string(size);
	return txt;
}