#ifndef GLOBALTYPES_HPP_INCLUDED
#define GLOBALTYPES_HPP_INCLUDED

namespace Monopoly {
    enum GameStatus {
        GAME_NORMAL,
        GAME_ERROR
    };

    enum Location {
        GO,
        MEDITERRANEAN_AVENUE,
        COMMUNITY_CHEST_1,
        BALTIC_AVENUE,
        INCOME_TAX,
        READING_RAILROAD,
        ORIENTAL_AVENUE,
        CHANCE_1,
        VERMONT_AVENUE,
        CONNECTICUIT_AVENUE,
        JUST_VISITING,
        ST_CHARLES_PLACE,
        ELECTRIC_COMPANY,
        STATES_AVENUE,
        VIRGINIA_AVENUE,
        PENNSYLVANIA_RAILROAD,
        ST_JAMES_PLACE,
        COMMUNITY_CHEST_2,
        TENNESSEE_AVENUE,
        NEW_YORK_AVENUE,
        FREE_PARKING,
        KENTUCKY_AVENUE,
        CHANCE_2,
        INDIANA_AVENUE,
        ILLINOIS_AVENUE,
        BO_RAILROAD,
        ATLANTIC_AVENUE,
        VENTNOR_AVENUE,
        WATER_WORKS,
        MARVIN_GARDENS,
        GO_TO_JAIL,
        PACIFIC_AVENUE,
        NORTH_CAROLINA_AVENUE,
        COMMUNITY_CHEST_3,
        PENNSYLVANIA_AVENUE,
        SHORT_LINE,
        CHANCE_3,
        PARK_PLACE,
        LUXURY_TAX,
        BOARDWALK,
        NULL_PROPERTY
    };

    enum ColorGroup {
        PURPLE,
        LIGHT_BLUE,
        MAGENTA,
        ORANGE,
        RED,
        YELLOW,
        GREEN,
        BLUE,
        RAILROAD,
        UTILITY,
        NULL_GROUP
    };

    struct Property {
        const Location location;                    // Location of property
        const ColorGroup group;
        unsigned int houses;
        unsigned int hotels;
        bool isMortgaged;

        const unsigned int rent;
        const unsigned int rentWithColorSet;
        const unsigned int rentWithOneHouse;
        const unsigned int rentWithTwoHouses;
        const unsigned int rentWithThreeHouses;
        const unsigned int rentWithFourHouses;
        const unsigned int rentWithHotel;

        const unsigned int housesCost;
        const unsigned int hotelsCost;

        const unsigned int normalValue;
        const unsigned int mortgageValue;

        const unsigned int rentMultiplierUtility;
        const unsigned int rentMultiplierUtilityBoth;

        const unsigned int rentWithOneRailroad;
        const unsigned int rentWithTwoRailroads;
        const unsigned int rentWithThreeRailroads;
        const unsigned int rentWithFourRailroads;
    };

    enum Piece {
        DOG,
        BATTLESHIP,
        RACECAR,
        TOPHAT,
        CAT,
        PENGUIN,
        THIMBLE,
        RUBBERDUCKY,
        NULL_PIECE
    };

    extern const Property propertyDef_MediterraneanAvenue;
    extern const Property propertyDef_BalticAvenue;
    extern const Property propertyDef_ReadingRailroad;
    extern const Property propertyDef_OrientalAvenue;
    extern const Property propertyDef_VermontAvenue;
    extern const Property propertyDef_ConnecticuitAvenue;
    extern const Property propertyDef_StCharlesPlace;
    extern const Property propertyDef_ElectricCompany;
    extern const Property propertyDef_StatesAvenue;
    extern const Property propertyDef_VirginiaAvenue;
    extern const Property propertyDef_PennsylvaniaRailroad;
    extern const Property propertyDef_StJamesPlace;
    extern const Property propertyDef_TennesseeAvenue;
    extern const Property propertyDef_NewYorkAvenue;
    extern const Property propertyDef_KentuckyAvenue;
    extern const Property propertyDef_IndianaAvenue;
    extern const Property propertyDef_IllinoisAvenue;
    extern const Property propertyDef_BoRailroad;
    extern const Property propertyDef_AtlanticAvenue;
    extern const Property propertyDef_VentnorAvenue;
    extern const Property propertyDef_WaterWorks;
    extern const Property propertyDef_MarvinGardens;
    extern const Property propertyDef_PacificAvenue;
    extern const Property propertyDef_NorthCarolinaAvenue;
    extern const Property propertyDef_PennsylvaniaAvenue;
    extern const Property propertyDef_ShortLine;
    extern const Property propertyDef_ParkPlace;
    extern const Property propertyDef_Boardwalk;
    extern const Property propertyDef_NullProperty;

    Property getPropertyDef(Location location);         // Retrieve property definition
}

#endif // GLOBALTYPES_HPP_INCLUDED
