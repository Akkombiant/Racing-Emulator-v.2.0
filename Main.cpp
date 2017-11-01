#include "Car.h"
#include "Map.h"
#include "Obstacles.h"
#include "GlobalVariables.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>
#include "namespaceConst.h"

using namespace GlobalVaria;




int main()
{	
	Game* game;
	game->mainAlgorithm();

	std :: cin.get();
	return 0;
}