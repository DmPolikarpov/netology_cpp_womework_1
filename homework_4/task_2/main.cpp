#include <iostream>

int main()
{
    int a, result = 0;

    std::cout << "Введите целое число: " << std::endl;
    std::cin >> a;

    while (a > 0)
    {
        result += a % 10;
        a /= 10;
    }

    std::cout << "Сумма цифр: " << result << std::endl;

    return 0;
}