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
#include "cCar.h"

using namespace std;
class SportCar : public Car
{
protected:
	int horsepower;

public:
	SportCar(vector<Wheel*> _wheels, string _color, int _horsepower);
	string toString();
	int getHorsepower();
	void setHorsepower(int _horsepower);
	float getKmPerLiter();
};
