#pragma once

#include "GlobalTypes.hpp"

namespace Monopoly {
    class Player {
    public:
    Piece piece;                    // What piece the player is
    Location location;              // Current location of player
    unsigned int numProperties;     // Number of properties owned by player
    Property properties[40];        // Array of owned properties
    unsigned int money;             // Current balance of player
    bool communityChestGetOutJail;  // Has the community chest get out of jail free card
    bool chanceGetOutJail;          // Has the chance get out of jail free card

    Player();                       // Default constructor
    Player(Piece pieceInput);       // Initialize player
    };
}
