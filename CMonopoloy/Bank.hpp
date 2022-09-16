#ifndef BANK_HPP_INCLUDED
#define BANK_HPP_INCLUDED

#include "GlobalTypes.hpp"
#include "Player.hpp"

namespace Monopoly {
    class Bank {

private:
    int money;
    int houses;
    int hotels;

public:
    Bank();
    bool giveMoney(Player& player, int amount);
    bool receiveMoney(Player& player, int amount);
    bool buyHouse(Player& player, Property& property, int number);
    bool buyHotel(Player& player, Property& property);
    int getBalance();
    int getNumHouses();
    int getNumHotels();
    };
}

#endif // BANK_HPP_INCLUDED
