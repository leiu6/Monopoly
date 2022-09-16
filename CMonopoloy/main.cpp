#include "Player.hpp"
#include "Game.hpp"

int main()
{
	Monopoly::Player* players = new Monopoly::Player[40];
	Monopoly::Game main = Monopoly::Game(players);

	return 0;
}
