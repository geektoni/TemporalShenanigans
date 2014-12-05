#include "player.h"
#include <cstdlib>
#include <ctime>

Player::Player(std::string name, FakeAmbient *ambient)
{
	playerName = name;
	envir = ambient;
	envir.getID();
}
