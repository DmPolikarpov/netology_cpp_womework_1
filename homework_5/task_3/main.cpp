#include <iostream>

int main()
{
    const int rows = 3;
    const int columns = 6;
    int integers[rows][columns] =
    {
        {4, 23, 12, 54, 77, 0},
        {2, 1, 4, 3, 5, 34},
        {6, 7, 8, 9, 4, 1}
    };

    int minValue{integers[0][0]};
    int maxValue{integers[0][0]};

    int minIndex[2]{0, 0};
    int maxIndex[2]{0, 0};

    std::cout << "Массив: " << std::endl;

    for (int i{}; i < rows; i++)
    {
        for (int j{}; j < columns; j++)
        {
            // display element
            std::cout << integers[i][j] << "\t";
        
            // find min value
            if (integers[i][j] < minValue)
            {
                minValue = integers[i][j];
                minIndex[0] = i;
                minIndex[1] = j;
            }

            // find max value
            if (integers[i][j] > maxValue)
            {
                maxValue = integers[i][j];
                maxIndex[0] = i;
                maxIndex[1] = j;
            }
        }
        std::cout << std::endl;
    }

    std::cout << "Индекс минимального элемента: " << minIndex[0] << " " << minIndex[1] << std::endl;
    std::cout << "Индекс максимального элемента: " << maxIndex[0] << " " << maxIndex[1] << std::endl;

    return 0;
}