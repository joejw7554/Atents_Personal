#pragma once
class Maze
{

#define COL 4
#define ROW 3

	enum GroundType
	{
		Normal = 0, Mountain, Destination, Start
	};

private:
	GroundType Map[COL][ROW] = { GroundType::Normal, };
	GroundType* PlayerLocation = nullptr;

public:
	void MazeGame();

private:
	void GameStart();
	void GenerateMap(GroundType(*Map)[ROW]);
	bool IsValidMovement(GroundType** PlayerLocation, char playerInput);
	void MazeGame_Movement();
	bool IsOnDestionation();
};