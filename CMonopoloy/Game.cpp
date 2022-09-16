#include "GlobalTypes.hpp"
#include "Game.hpp"

namespace Monopoly {
    Game::Game(Player* playerArray) {
        players = playerArray;

        bank = Bank();
    }
}
