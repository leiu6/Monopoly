#pragma once

#include "GlobalTypes.hpp"
#include "Player.hpp"

namespace Monopoly {
    void spaceHandler(Player& player, Location location);            // Handles what happens to the current player when they land on a spot

    // One-off spaces
    void go(Player& player);
    void incomeTax(Player& player);
    void freeParking(Player& player);
    void goToJail(Player& player);
    void luxuryTax(Player& player);

    // Properties
    void properties(Player& player);

    // Card locations
    void communityChest(Player& player);
    void chance(Player& player);

    // Railroads
    void readingRailroad(Player& player);
    void pennsylvaniaRailroad(Player& player);
    void boRailroad(Player& player);
    void shortLine(Player& player);

    // Utilities
    void electricCompany(Player& player);
    void waterWorks(Player& player);
}

