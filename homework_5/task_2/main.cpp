#include <iostream>

int main()
{
    const int size = 10;
    int integers[size]{ 27, 123, 41, 6, 1, 23, 9, 12, 45, 100 };

    int minValue{integers[0]};
    int maxValue{integers[0]};

    std::cout << "Массив: ";

    for (int element{}; element < size; element++)
    {
        // show element
        if (element < size -1)
            std::cout << integers[element] << ", ";
        else
            std::cout << integers[element] << std::endl;
        
        // find min value
        if (integers[element] < minValue)
            minValue = integers[element];

        // find max value
        if (integers[element] > maxValue)
            maxValue = integers[element];

    }

    std::cout << "Минимальное значение: " << minValue << std::endl;
    std::cout << "Максимальное значение: " << maxValue << std::endl;

    return 0;
}