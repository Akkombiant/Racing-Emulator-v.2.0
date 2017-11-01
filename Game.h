#ifndef GAME_H
#define GAME_H

class Game
{
public:

	virtual void createMap () = 0;
	virtual void loadMap () = 0;
	virtual void clearScreen () = 0;
	virtual void createCar () = 0;
	virtual void turnLeft () = 0;
	virtual void turnRight () = 0;
	virtual void createObstacles () = 0;
	virtual void createScores () = 0;
	
	void mainAlgorithm ();

};

#endif