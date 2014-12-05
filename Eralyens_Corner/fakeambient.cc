#include "fakeambient.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

FakeAmbient::FakeAmbient()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			room[i][j] = '+';
			room_IDs[i][j] = 0;
		}
	}
	seed = time(NULL);
	srand(seed);
	ID = 1;
}

int FakeAmbient::getID()
{
	int newID = ID;
	ID++;
	return newID;
}

void FakeAmbient::print()
{
	std::cout << std::endl << std::endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << room[i][j];
		}
		
	}
	
}

void FakeAmbient::spawnPlayer(int r, int c, int id)
{
	room_IDs[r][c] = id;
	FakeAmbient::updateScreen();
}

void FakeAmbient::updateScreen()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (room_IDs[i][j] == 0)
				room[i][j] = '+';
			else
				room[i][j] = '@';
		}
		
	}
	
}
