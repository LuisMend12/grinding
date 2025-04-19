#pragma once
#include <iostream>
#include <vector>
#include <conio.h>
#include <windows.h>
using namespace std;


class SnakeGame
{
private:
	bool isGameOver;
	int width, height;

	int snakeHeadX, snakeHeadY;
	int foodX, foodY;
	int score;
	vector<int> snakeTailX, snakeTailY;
	int snakeTailLength;

	enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
	eDirection dir;
	

public:
	bool getIsGameOver() { return isGameOver; }

	void Setup();
	void Print();
	void Input();
	void Logic();

};

