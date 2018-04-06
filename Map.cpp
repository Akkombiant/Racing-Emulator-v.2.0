#include "Map.h"
#include "GlobalVariables.h"
#include "namespaceConst.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace GlobalVaria;

Map :: Map()
{
	ncashcheck = 0; ndistance = 0; ncashpickedup = 0;
}

void Map :: createMap()
{
	for(int i = 0; i < 20; ++ i) {
		for(int j = 0; j < 20; ++ j) {
			map[i][0] = '|';
			map[i][18] = '|';
			map[i][j] = ' ';
		}
	}
}

void Map :: loadMap()
{
	for(int i = 0; i < 20; ++ i) {
		for(int j = 0; j < 20; ++ j) {
			std :: cout << map[i][j];
			if(j >= 19) {
				std :: cout << std :: endl;
			}
		}
	}
}

void Map :: clearScreen() //used to prevent flicker
{
	HANDLE hOut;
	COORD Position;
 
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
 
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

void Map :: gameLogic()
{
//	if (map[y - 1][x] == cash
//		|| map[y - 1][x - 1] == cash
//		|| map[y - 1][x + 1] == cash) {
//		map[y - 2][x] = ' ';
//		map[y - 2][x - 1] = ' ';
//		map[y - 2][x + 1] = ' ';
//
//		++ncashpickedup;
//
//		scoreCoordY = 0;
//		scoreCoordX = rand() % 15 + 2;
//	}
//	else if (scoreCoordY > 20) { //generates the cash
//		scoreCoordY = 0;
//		scoreCoordX = rand() % 15 + 2;
//	}

	if (map[y - 2][x] == obs  //checking crash
		|| map[y - 1][x - 1] == obs
		|| map[y - 1][x + 1] == obs
		|| map[y + 1][x + 1] == obs
		|| map[y + 1][x - 1] == obs)
	{
		std::cout << "\n\n You crashed!\n Press ENTER for exit" << std::endl;
		_getch();
		exit(0);
	}
}