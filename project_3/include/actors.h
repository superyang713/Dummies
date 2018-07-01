#include <iostream>

using namespace std;

#ifndef ACTORS_H_INCLUDED
#define ACTORS_H_INCLUDED

class Creature
{
    public:
        string name;
        int level;
    public:
        Creature(string StartName, int StartLevel);
        string get_name();
        int get_level();
        int defensive_roll();
};

class Dragon : public Creature
{
    public:
        int scaliness;
        bool breaths_fire;
    public:
        Dragon(string StartName, int StartLevel, int Scaliness, bool Breaths_fire);
        int defensive_roll();
};

class Wizzard : public Creature
{
    public:
        Wizzard(string StartName, int StartLevel);
        bool attack(Creature creature);
};

#endif
