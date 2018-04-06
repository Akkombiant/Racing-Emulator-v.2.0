#ifndef CAR_H
#define CAR_H
#include "namespaceConst.h"

using namespace GlobalVaria;


class Car
{
public:
	Car();

	void createCar();

	void turnLeft();

	void turnRight();

	void control();

	~Car() {}
};

#endif