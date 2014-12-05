#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "fakeambient.h"
class Player
{
	protected:
		int playerID;
		std::string playerName;
		FakeAmbient *envir;
	public:
		Player(std::string name, FakeAmbient *ambient);
};

#endif
