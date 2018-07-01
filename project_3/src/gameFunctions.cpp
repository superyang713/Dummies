#include <iostream>
#include <actors.h>

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

    bool isDone = false;
    while (!isDone)
    {
        std::cout << "A " << dragon->get_name() << " appeared" << std::endl;

        char cmd;
        std::cout << "Do you [a]ttack, [r]unaway, or [l]ook around? ";
        std::cin >> cmd;
        switch (cmd)
        {
            case 'a':
                std::cout << "attack" << std::endl;
                break;
            case 'r':
                std::cout << "run away" << std::endl;
                break;
            case 'l':
                std::cout << "look around" << std::endl;
                break;
            default:
                std::cout << "OK, exiting game... bye!" << std::endl;
                isDone = true;
        }
    }
}
