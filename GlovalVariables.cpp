#include "GlobalVariables.h"

int y, x, scoreCoordY, scoreCoordX, obstacleCoordY, obstacleCoordX;
int ncashcheck = 0, ndistance = 0, ncashpickedup = 0;
int defaultSpeed = 100;
char obs = 219, cash = '$', car = 'H';
char map[maxCoordY][maxCoordX];
bool isStartup = true;