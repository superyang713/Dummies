#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int i;
    std::cout << "Type any number: " << std::endl;
    std::cin >> i;

    if (i > 10) {
        std::cout << "It's greater than 10." << std::endl;
    }
    else if (i < 10) {
        std::cout << "It's smaller than 10." << std::endl;
    }
    else {
        std::cout << "It's 10." << std::endl;
    }
    return 0;
}
