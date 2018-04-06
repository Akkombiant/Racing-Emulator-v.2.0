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
	defaultSpeed = 100; y = defCoordCarY; x = defCoordCarX;
}

void Car :: createCar ()
{
	map[y][x] = 'H';
	map[y][x + 1] = '|';
	map[y][x - 1] = '|';
	map[y + 1][x - 1] = 'o';
	map[y + 1][x + 1] = 'o';
	map[y - 1][x - 1] = 'o';
	map[y - 1][x + 1] = 'o';
}

void Car :: turnLeft ()
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

void Car :: turnRight ()
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

void Car :: control()
{
	if (_kbhit()) {
		switch (_getch())
		{
		case 75: //left
			turnLeft();
			break;

		case 77: //right
			turnRight();
			break;

		case 72:
			defaultSpeed -= 20;
			break;

		case 80:
			defaultSpeed += 20;
			break;
		default:
			break;
		}
	}
}