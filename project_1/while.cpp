#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int x;
    int i = 0;
    std::cout << "please enter a number: ";
    std::cin >> x;
    while (i < x) {
        std::cout << i << std::endl;
        i++;
    }
    return 0;
}
