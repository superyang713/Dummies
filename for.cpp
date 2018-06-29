#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int number;
    std::cout << "please type an integer: ";
    std::cin >> number;

    for (int i = 0; i < number; i++) {
        std::cout << i << std::endl;
    }
    return 0;
}
