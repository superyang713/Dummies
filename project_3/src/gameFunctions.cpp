#include <iostream>

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
    bool isDone = false;
    while (!isDone)
    {
        std::cout << "A creature appeared" << std::endl;

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
