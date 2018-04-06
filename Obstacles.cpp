#include "Obstacles.h"
#include "GlobalVariables.h"
#include "namespaceConst.h"
#include <iostream>

using namespace GlobalVaria;

Obstacles :: Obstacles()
{
	obstacleCoordY = 0;  obstacleCoordX = rand() % 15 + 2; //the obstacles coordiantes
	scoreCoordX = rand() % 15 + 2; //the cash coordinates
}

void Obstacles :: createObstacles()
{	
	map[obstacleCoordY][obstacleCoordX] = ' ';
	map[obstacleCoordY][obstacleCoordX] = ' ';
	map[obstacleCoordY][obstacleCoordX + 1] = ' ';
	map[obstacleCoordY][obstacleCoordX - 1] = ' ';
	map[obstacleCoordY + 1][obstacleCoordX - 1] = ' ';
	map[obstacleCoordY + 1][obstacleCoordX + 1] = ' ';
	map[obstacleCoordY - 1][obstacleCoordX - 1] = ' ';
	map[obstacleCoordY - 1][obstacleCoordX + 1] = ' ';
			
	++ obstacleCoordY;
			
	map[obstacleCoordY][obstacleCoordX] = obs;
	map[obstacleCoordY][obstacleCoordX + 1] = obs;
	map[obstacleCoordY][obstacleCoordX - 1] = obs;
	map[obstacleCoordY + 1][obstacleCoordX - 1] = obs;
	map[obstacleCoordY + 1][obstacleCoordX + 1] = obs;
	map[obstacleCoordY - 1][obstacleCoordX - 1] = obs;
	map[obstacleCoordY - 1][obstacleCoordX + 1] = obs;
			
	if(obstacleCoordY > 20)
	{
		obstacleCoordY = 0;  obstacleCoordX = rand() % 15 + 2;
	}
}

//void Obstacles :: createScores()
//{
//	if(ncashcheck && map[scoreCoordY][scoreCoordX] != obs)
//	{
//		map[scoreCoordY][scoreCoordX] = ' ';
//
//		++ scoreCoordY;
//
//		map[scoreCoordY][scoreCoordX] = cash;
//	}
//}