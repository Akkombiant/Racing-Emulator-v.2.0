#ifndef OBSTACLES_H
#define OBSTACLES_H
#include "namespaceConst.h"
#include "Game.h"

using namespace GlobalVaria;

class Obstacles : public Game
{
public:

	Obstacles ();



	Obstacles (int scoreCoordY);



	void createObstacles (char map[maxCoordY][maxCoordX]);
	


	void createScores (char map[maxCoordY][maxCoordX]);

protected:
	int y, x, ncashcheck, obstacleCoordX, obstacleCoordY;
	char obs, cash;
};





#endif