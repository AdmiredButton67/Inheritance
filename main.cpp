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

#include "cCar.h"
#include "cCompactCar.h"
#include "cSportCar.h"

int main()
{
	vector<Wheel*> ws1;
	ws1.push_back(new Wheel(20.0f));
	ws1.push_back(new Wheel(20.0f));
	ws1.push_back(new Wheel(20.0f));
	ws1.push_back(new Wheel(20.0f));
	
	vector<Wheel*> ws2;
	ws2.push_back(new Wheel(22.0f));
	ws2.push_back(new Wheel(22.0f));
	ws2.push_back(new Wheel(22.0f));
	ws2.push_back(new Wheel(22.0f));
	ws2.push_back(new Wheel(22.0f));

	vector<Wheel*> ws3;
	ws3.push_back(new Wheel(24.0f));
	ws3.push_back(new Wheel(24.0f));
	ws3.push_back(new Wheel(24.0f));
	ws3.push_back(new Wheel(24.0f));
	
	vector<Car*> cars;
	cars.push_back(new Car(ws1, "Gray"));
	cars.push_back(new Car(ws1, "White"));
	cars.push_back(new CompactCar(ws2, "Blue", 5));
	cars.push_back(new CompactCar(ws2, "Black", 5));
	cars.push_back(new SportCar(ws3, "Red", 3200));
	cars.push_back(new SportCar(ws3, "Yellow", 3302));
	
	float avgKmPerL = 0;
	int counter = 0;
	vector<Car*>::iterator it;
	for(it = cars.begin(); it != cars.end(); ++it)
	{
		cout << (*it)->toString() << endl << endl;
		avgKmPerL += (*it)->getKmPerLiter();
		counter++;
	}
	avgKmPerL /= counter;
	cout << "AVERAGE KM per LITER: " << avgKmPerL << " Km/L" << endl;
	return 0;
}
