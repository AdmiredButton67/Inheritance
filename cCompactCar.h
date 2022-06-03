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
class CompactCar : public Car
{
protected:
	int doors;

public:
	CompactCar(vector<Wheel*> _wheels, string _color, int _doors);
	string toString();
	int getDoors();
	void setDoors(int _doors);
	float getKmPerLiter();
};
