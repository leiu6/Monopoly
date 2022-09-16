#include "Player.hpp"

namespace Monopoly {
    Player::Player() {
        piece = NULL_PIECE;

        location = GO;
        numProperties = 0;
        money = 1500;
        communityChestGetOutJail = false;
        chanceGetOutJail = false;
    }

    Player::Player(Piece pieceInput) {
        piece = pieceInput;

        location = GO;
        numProperties = 0;
        money = 1500;               // Standard starting money for Monopoly
        communityChestGetOutJail = false;
        chanceGetOutJail = false;
    }
}
