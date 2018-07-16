#include <iostream>

template <typename T>
class CoolHolder
{
public:
    T first;
    T second;
    T third;
    T sum()
    {
        return first + second + third;
    }


};

int main()
{
    CoolHolder<int> IntHolder;
    IntHolder.first = 10;
    IntHolder.second = 20;
    IntHolder.third = 30;

    CoolHolder<int> AnotherIntHolder;
    AnotherIntHolder.first = 100;
    AnotherIntHolder.second = 200;
    AnotherIntHolder.third = 300;

    CoolHolder<float> FloatHolder;
    FloatHolder.first = 3.1415;
    FloatHolder.second = 4.1415;
    FloatHolder.third = 5.1415;

    std::cout << IntHolder.first << std::endl;
    std::cout << AnotherIntHolder.first << std::endl;
    std::cout << FloatHolder.first << std::endl;

    CoolHolder<int> *hold;
    for (int i = 0; i < 10; i++) {
        hold = new CoolHolder<int>;
        hold->first = i * 100;
        hold->second = i * 110;
        hold->third = i * 120;
        std::cout << hold->sum() << std::endl;
        delete hold;
    }
    return 0;
}
