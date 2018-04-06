#ifndef MAP_H
#define MAP_H
#include "namespaceConst.h"

using namespace GlobalVaria;

class Map
{
public:
	Map();

	void createMap();

	void loadMap();

	void clearScreen(); //used to prevent flicker

	void gameLogic();

	~Map() {}
};
#endif