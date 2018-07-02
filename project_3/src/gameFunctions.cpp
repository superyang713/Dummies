#include <iostream>
#include <actors.h>
#include <vector>
#include <lib.h>

using namespace std;

void print_header()
{
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "             WIZZARD GAME" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << std::endl;
}

void game_loop()
{
    Dragon *dragon = new Dragon("Black Dragon", 50, 2, false);
    Creature *bat = new Creature("Bat", 5);
    Creature *toad = new Creature("Toad", 1);
    Creature *tiger = new Creature("Tiger", 12);
    Wizzard *evil_wizzard = new Wizzard("Evil Wizzard", 1000);

    Wizzard *hero = new Wizzard("Gandolf", 75);

    // A vecotr that holds all monsters.
    vector<Creature> Monsters;
    Monsters.push_back(*dragon);
    Monsters.push_back(*bat);
    Monsters.push_back(*toad);
    Monsters.push_back(*tiger);
    Monsters.push_back(*evil_wizzard);

    bool isDone = false;
    while (!isDone)
    {
        auto size = Monsters.size();
        int rand_index = randint(0, size-1);
        Creature active_monster = Monsters[rand_index];

        std::cout << "A " << active_monster.get_name() << " appeared"
            << std::endl;

        char cmd;
        std::cout << "Do you [a]ttack, [r]unaway, or [l]ook around? ";
        std::cin >> cmd;
        std::cout << std::endl;
        switch (cmd)
        {
            case 'a':
                if (hero->attack(active_monster)) {
                    Monsters.erase(Monsters.begin() + rand_index);
                    std::cout << "The wizzard defeated " << active_monster.name
                        << std::endl;
                }
                else {
                    std::cout << "The wizzard has been defeated by the "
                        << "powerful " << active_monster.name << std::endl;
                }
                break;
            case 'r':
                std::cout << "The wizzard has become unsure of his power and "
                    << "flees!!!" << std::endl;
                break;
            case 'l':
                std::cout << "The wizzard " << hero->name << " taks in the "
                    << "surroundings and sees:" << std::endl;
                for (auto it = begin(Monsters); it != end(Monsters); ++it)
                {
                    std::cout << "* " << it->name << " of level " << it->level
                        << std::endl << std::endl;
                }
                break;
            default:
                std::cout << "OK, exiting game... bye!" << std::endl;
                isDone = true;
        }
    }
}
