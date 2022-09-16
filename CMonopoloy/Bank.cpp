#include "GlobalTypes.hpp"
#include "Bank.hpp"
#include "Player.hpp"

namespace Monopoly {
    Bank::Bank() {
        // Initialize the bank
        money = 20580;
        houses = 32;
        hotels = 12;
    }

    bool Bank::giveMoney(Player& player, int amount) {
        // See if bank has enough money
        if (amount > money) return false;

        player.money += amount;         // Give to player
        money -= amount;                // Subtract from bank

        return true;
    }

    bool Bank::receiveMoney(Player& player, int amount) {
        // See if player has enough money
        if (amount > player.money) return false;

        player.money -= amount;     // Take from player
        money += amount;            // Give to bank

        return true;
    }

    bool Bank::buyHouse(Player& player, Property& property, int number) {
        // See if houses can be bought on property
        if ((property.group == UTILITY) || (property.group == RAILROAD) || (property.group == NULL_GROUP))
            return false;

        // See if property can have as many houses
        if (4 - property.houses < number) return false;

        // See if player can afford houses
        if (number * property.housesCost > player.money) return false;

        // See if bank has enough houses
        if (number > houses) return false;


        // There is no problem.
        // We can set the right variables:

        player.money -= number * property.housesCost;   // Subtract money from player
        money += number * property.housesCost;          // Give money to bank
        property.houses += number;                      // Set houses number on property
        houses -= number;                               // Subtract houses from bank

        return true;
    }

    bool Bank::buyHotel(Player& player, Property& property) {
        // See if hotel can be bought on property
        if ((property.group == UTILITY) || (property.group == RAILROAD) || (property.group == NULL_GROUP))
            return false;

        // See if property has requisite number of houses
        if (property.houses != 4) return false;

        // See if player already bought hotel
        if (property.hotels = 1) return false;

        // See if player can afford hotel
        if (property.hotelsCost > player.money) return false;

        // See if bank has a hotel
        if (hotels < 1) return false;


        // There is no problem
        // We can set the right variables

        player.money -= property.hotelsCost;            // Subtract money from player
        money += property.hotelsCost;                   // Give money to bank
        property.houses = 0;                            // Set property houses to 0
        houses += 4;                                    // Return houses to the bank
        property.hotels = 1;                            // Set property hotels number

        return true;
    }

    int Bank::getBalance() {
        return money;
    }

    int Bank::getNumHouses() {
        return houses;
    }

    int Bank::getNumHotels() {
        return hotels;
    }
}
