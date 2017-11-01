#include "Car.h"
#include "GlobalVariables.h"
#include <iostream>
#include <conio.h>
#include <ctime>
#include <Windows.h>
#include "namespaceConst.h"

using namespace GlobalVaria;

Car :: Car()
{
	y = 17; x = 9; defaultSpeed = 100;
}



void Car :: createCar (char map[maxCoordY][maxCoordX])
{
	map[y][x] = 'H';
	map[y][x + 1] = '|';
	map[y][x - 1] = '|';
	map[y + 1][x - 1] = 'o';
	map[y + 1][x + 1] = 'o';
	map[y - 1][x - 1] = 'o';
	map[y - 1][x + 1] = 'o';
}



void Car :: turnLeft (char map[maxCoordY][maxCoordX])
{
	if(map[y][x - 3] != '|') {
		map[y][x] = ' ';
		map[y][x + 1] = ' ';
		map[y][x - 1] = ' ';
		map[y + 1][x - 1] = ' ';
		map[y + 1][x + 1] = ' ';
		map[y - 1][x - 1] = ' ';
		map[y - 1][x + 1] = ' ';
				
		x -= 3;
				
		map[y][x] = 'H';
		map[y][x + 1] = '|';
		map[y][x - 1] = '|';
		map[y + 1][x - 1] = 'o';
		map[y + 1][x + 1] = 'o';
		map[y - 1][x - 1] = 'o';
		map[y - 1][x + 1] = 'o';
		}
}



void Car :: turnRight (char map[maxCoordY][maxCoordX])
{
	if(map[y][x + 3] != '|') {
		map[y][x] = ' ';
		map[y][x + 1] = ' ';
		map[y][x - 1] = ' ';
		map[y + 1][x - 1] = ' ';
		map[y + 1][x + 1] = ' ';
		map[y - 1][x - 1] = ' ';
		map[y - 1][x + 1] = ' ';
				
		x += 3;
				
		map[y][x] = 'H';
		map[y][x + 1] = '|';
		map[y][x - 1] = '|';
		map[y + 1][x - 1] = 'o';
		map[y + 1][x + 1] = 'o';
		map[y - 1][x - 1] = 'o';
		map[y - 1][x + 1] = 'o';
	}
}
