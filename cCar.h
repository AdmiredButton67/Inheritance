/*
TC1030. Object-Oriented programming
Sergio Ruiz-Loza. 2022
Example for the topics:
- Classes
- Vectors
- Iterators
- Inheritance
- Polymorphism
- Aggregate values
*/

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "cWheel.h"

using namespace std;
class Car
{
private:
	string color;
	float kmPerLiter;

protected:
	vector<Wheel*> wheels;

public:
	Car(vector<Wheel*> _wheels, string _color);
	virtual string toString();
	virtual float getKmPerLiter();
	string getColor();
	void setColor(string _color);
};
