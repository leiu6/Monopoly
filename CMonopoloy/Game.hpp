#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include "GlobalTypes.hpp"
#include "Player.hpp"
#include "Bank.hpp"

namespace Monopoly {
    class Game {
private:
    Player* players;            // Array of players
    Bank bank;                  // Bank

public:
    Game(Player* playerArray);
    };
}

#endif // GAME_HPP_INCLUDED
