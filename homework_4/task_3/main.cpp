#include <iostream>

int main()
{
    int a = 0;

    std::cout << "Введите целое число: " << std::endl;
    std::cin >> a;

    for (int i= 1; i <= 10; i++)
    {
        std::cout << a << " * " << i << " = " << a*i << std::endl;
    }
}