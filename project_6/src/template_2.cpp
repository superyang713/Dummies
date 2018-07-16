#include <iostream>

template <typename T>
class Electricity
{
public:
    static T charge;
};

template <typename T>
T Electricity<T>::charge;

int main()
{
    Electricity<int>::charge = 10;
    Electricity<float>::charge = 30.66;
    Electricity<int> inst;
    inst.charge = 22;

    std::cout << Electricity<int>::charge << std::endl;
    std::cout << Electricity<float>::charge << std::endl;
    std::cout << inst.charge << std::endl;
    return 0;
}
