#include "Car.h"
#include "Map.h"
#include "Obstacles.h"
#include "GlobalVariables.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <chrono>
#include "namespaceConst.h"

using namespace GlobalVaria;

int main()
{	
	auto start = std::chrono::high_resolution_clock::now();
	auto stop = start;

	Map mapClass;
	Car carClass;
	Obstacles obsClass;

	mapClass.createMap();
	carClass.createCar();

	while (true) {
		mapClass.clearScreen();
		obsClass.createObstacles();
		//obsClass.createScores();

		mapClass.loadMap();

		mapClass.gameLogic();
		carClass.control();

		stop = std::chrono::high_resolution_clock::now();
		std::cout << "\n	Distance: " 
			<< std::chrono::duration_cast<std::chrono::seconds>(stop - start).count()
			<< std::endl;

		if (isStartup)
		{     //does so the game starts after a key is pressed
			_getch();
			isStartup = false;
		}
		
		Sleep(defaultSpeed);
	}
	_getch();
	return 0;
}