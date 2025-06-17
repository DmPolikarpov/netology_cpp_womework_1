#include <iostream>

int main()
{
    const int size = 10;
    int integers[size]{ 2, 5, 4, 6, 2, 8, 9, 12, 45, 10 };

    for (int element{}; element < size; element++)
    {
        if (element < size -1)
            std::cout << integers[element] << ", ";
        else
            std::cout << integers[element] << std::endl;
    }

    return 0;
}