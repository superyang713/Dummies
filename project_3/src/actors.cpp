#include <iostream>
#include <actors.h>
#include <lib.h>
#include <string>

using namespace std;

Creature::Creature(string StartName, int StartLevel)
{
    name = StartName;
    level = StartLevel;
}

string Creature::get_name()
{
    return name;
}

int Creature::get_level()
{
    return level;
}

int Creature::defensive_roll()
{
    int roll = randint(1, 12);
    return roll * level;
}

Dragon::Dragon(string StartName, int StartLevel, int Scaliness,
        bool Breaths_fire) : Creature(StartName, StartLevel)
{
    name = StartName;
    level = StartLevel;
    scaliness = Scaliness;
    breaths_fire = Breaths_fire;
}

int Dragon::defensive_roll()
{
    int value = Creature::defensive_roll() * scaliness;
    if (breaths_fire) {
        value = value * 2;
    }
    return value;
}

Wizzard::Wizzard(string StartName, int StartLevel) : Creature(StartName,
        StartLevel)
{
    name = StartName;
    level = StartLevel;
}

bool Wizzard::attack(Creature creature)
{
    int my_roll = defensive_roll();
    int their_roll = creature.defensive_roll();
    return my_roll >= their_roll;
}
