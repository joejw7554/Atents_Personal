#include "Maze.h"
#include <iostream>

using namespace std;

void Maze::MazeGame()
{
	GameStart();

}

void Maze::GameStart()
{
	cout << "Welcome The Game has Started" << endl;
	cout << "Generating Maps....." << endl;

	GenerateMap(Map);


	while (IsOnDestionation())
	{
		MazeGame_Movement();
	}
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	cout << "You have arrived on the destination" << endl;
	cout << "Congratulation YOU WIN" << endl;
}

void Maze::GenerateMap(GroundType(*Map)[ROW])
{
	int ColumLastIndex = COL - 1;
	int RowLastIndex = ROW - 1;

	//스타트지점 정의
	*(*Map) = GroundType::Start;

	//골인지점 정의
	*(*(Map + ColumLastIndex) + RowLastIndex) = GroundType::Destination;

	//이동 불가 지형(Mountain) 정의
	//S: Start X: Blocked G: Destination
	// 
	//  S X X
	//  	X
	//  X   X
	//  	G

	*(*(Map)+RowLastIndex) = GroundType::Mountain;
	*(*(Map)+(RowLastIndex - 1)) = GroundType::Mountain;


	*(*(Map + (ColumLastIndex - 1)) + RowLastIndex) = GroundType::Mountain;
	*(*(Map + (ColumLastIndex - 1)) + (RowLastIndex - 2)) = GroundType::Mountain;

	*(*(Map + ColumLastIndex) + (RowLastIndex - 2)) = GroundType::Mountain;

	PlayerLocation = *Map;
}

bool Maze::IsValidMovement(GroundType** PlayerLocation, char playerInput)
{
	GroundType* Temp = *PlayerLocation;

	switch (playerInput)
	{
	case 'W':
		Temp = Temp - ROW;
		break;

	case 'S':
		Temp = Temp + ROW;
		break;

	case 'A':
		Temp = Temp - 1;
		break;

	case 'D':
		Temp = Temp + 1;
		break;

	default:
		cout << "Not Valid Command TryAgain" << endl;
		return false;
	}

	if (*Temp == GroundType::Mountain)
	{
		cout << "You can't Move To MOUNTAIN!" << endl;
		return false;
	}
	else if (*Temp == GroundType::Normal || *Temp == GroundType::Destination)
	{
		*PlayerLocation = Temp;
		return true;
	}
	else
	{
		cout << "That's blocked." << endl;
		return false;
	}
}

void Maze::MazeGame_Movement()
{
	cout << " Choose your direction" << endl;
	cout << "W: North, S : South  A : West, D : East" << endl;
	char PlayerSelection = 0;
	cin >> PlayerSelection;

	PlayerSelection = toupper(PlayerSelection);

	if (IsValidMovement(&PlayerLocation, PlayerSelection))
	{
		switch (PlayerSelection)
		{
		case 'W':
			cout << "You have moved to North. It's Ground" << endl;
			break;

		case 'S':
			cout << "You have moved to South. It's Ground" << endl;
			break;

		case 'A':
			cout << "You have moved to West. It's Ground" << endl;
			break;

		case 'D':
			cout << "You have moved to East. It's Ground" << endl;
			break;
		}
	}

}

bool Maze::IsOnDestionation()
{
	return *PlayerLocation != GroundType::Destination;
}