#include <iostream>

int main()
{
    int result = 0, curVal = 1;

    do 
    {
        std::cout << "Введите целое число или число '0', чтобы закончить:" << std::endl;
        std::cin >> curVal;
        result += curVal;
    } while (curVal != 0);

    std::cout << "Сумма: " << result << std::endl;

    return 0;
}