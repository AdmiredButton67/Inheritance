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

using namespace std;
class Wheel
{
private:
	float size;
public:
	Wheel();
	Wheel(float _size);
	float getSize();
	void setSize(float _size);
	string toString();
};
