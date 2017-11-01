#ifndef MAP_H
#define MAP_H
#include "namespaceConst.h"
#include "Game.h"

using namespace GlobalVaria;

class Map : public Game
{
public:
	
	Map();



	void createMap(char map[maxCoordY][maxCoordX]);



	void loadMap(char map[maxCoordY][maxCoordX]);



	void clearScreen(); //used to prevent flicker

protected: 
	int y, x, ncashcheck, ndistance, ncashpickedup;
	char map[maxCoordY][maxCoordX];
};



#endif