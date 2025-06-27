#include <iostream>

void counting_function();

int main()
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }

    return EXIT_SUCCESS;
}

void counting_function()
{
    static int count{ 1 };

    std::cout << "Количество вызовов функции counting_function(): " << count++ << std::endl;
}