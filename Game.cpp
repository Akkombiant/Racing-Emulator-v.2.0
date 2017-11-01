#include "Game.h"
#include "namespaceConst.h"
#include "GlobalVariables.h"

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>

using namespace GlobalVaria;

void Game :: mainAlgorithm() 
{
	srand(time(0));
	createMap ();
	createCar ();
	map[defCoordCarY][defCoordCarX] = car;
	while(true) {
	
		clearScreen ();
		createObstacles ();
		createScores ();
		loadMap ();
		std :: cout << " \n    Speed: " << defaultSpeed << std :: endl;
		std :: cout << " \n    Points: " << (ncashpickedup * 30) << std :: endl;
		if(isStartup) {     //does so the game starts after a key is pressed
			_getch();
			isStartup = false;
		}
		if(kbhit()) {
			if (getch() && GetAsyncKeyState(VK_LEFT) ) {
				if(map[y][x - 3] == obs) {
					std :: cout << "\n\n You crashed!\n Press ENTER for exit" << std :: endl;
					std :: cin.get();
				}
				turnLeft();
			}
		}
		if(kbhit()) {
			if (getch() && GetAsyncKeyState(VK_RIGHT) ) {
				if(map[y][x + 3] == obs) 
				{
					std :: cout << "\n\n You crashed!\n Press ENTER for exit" << std :: endl;
					
					std :: cin.get();
				}
				turnRight();
			}
		}
			//checks if the car crashed
		if(map[y - 2][x] == obs || map[y - 2][x - 1] == obs || map[y - 2][x + 1] == obs) {
			std :: cout << "\n\n You crashed!\n Press ENTER for exit" << std :: endl;

			std :: cin.get();
			//return 0;
		}
		//checks if the player picked up cash
		if(map[y - 2][x] == cash || map[y - 2][x - 1] == cash || map[y - 2][x + 1] == cash) {
			map[y - 2][x] = ' ';
			map[y - 2][x - 1] = ' ';
			map[y - 2][x + 1] = ' ';

			++ ncashpickedup;

			scoreCoordY = 0;
			scoreCoordX = rand() % 15 + 2;
		}

		else if(scoreCoordY > 20) { //generates the cash
			scoreCoordY = 0;
			scoreCoordX = rand() % 15 + 2;
		}
		if(scoreCoordY > 8) { //does so the cash doesnt appear next to the obstacle
			++ncashcheck;
		}
		Sleep(defaultSpeed);
	}
}
