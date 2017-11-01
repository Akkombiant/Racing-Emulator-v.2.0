#ifndef CAR_H
#define CAR_H
#include "namespaceConst.h"
#include "Game.h"

using namespace GlobalVaria;


class Car : public Game
{
public:
	int y, x;

	Car();



	void createCar (char map[maxCoordY][maxCoordX]);



	void turnLeft (char map[maxCoordY][maxCoordX]);



	void turnRight (char map[maxCoordY][maxCoordX]);



protected:
	int defaultSpeed;
	char map[maxCoordY][maxCoordX], obs;
};






#endif