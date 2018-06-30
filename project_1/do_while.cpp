#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int x;
    int i = 0;
    std::cout << "Please type a number: ";
    std::cin >> x;
    do {
        std::cout << i << std::endl;
        i++;
    } while (i < x);
    return 0;
}
