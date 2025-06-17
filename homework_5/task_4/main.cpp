#include <iostream>

int main()
{
    const int size = 10;
    int integers[size]{ 2, 5, 78, 6, 2, 8, 9, 12, 45, 10 };

    // before sorting
    std::cout << "Массив до сортировки: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << integers[i] << " ";
    }
    std::cout << std::endl;

    // sorting
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = size - i - 2; j >= 0; j--)
        {
            if (integers[j] > integers[j + 1])
            {
                int temp = integers[j];
                integers[j] = integers[j + 1];
                integers[j + 1] = temp;
            }
            
        }
    }

    // after sorting
    std::cout << "Массив после сортировки: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << integers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}