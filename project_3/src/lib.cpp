#include <iostream>

using namespace std;

int randint(int min, int max)  //range:[min, max]
{
    static bool first = true;
    if (first)
    {
        srand( time(NULL) ); //seeding for the first time only!
        first = false;
    }
    return min + rand() % ((max + 1) - min);
}
