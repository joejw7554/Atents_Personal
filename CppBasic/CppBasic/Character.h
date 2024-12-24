#pragma once
//#include 지형클래스 헤더

class Character
{
private:
	//TerrainClass* PlayerLocation;
	
public:
	//지형클래스 GetPlayerLocation() const;
	//void SetPlayerLocation(**TerrainClass PlayerLocation);
};


class TerrainClass
{
	enum class TerrainType
	{
		Start=0 ,Ground, Mountain, Goal , Max
	};

	enum class EventType
	{
		Disaster=0, Mosnter, Max
	};
private:
	TerrainType Terrain;
	EventType Event;
};

