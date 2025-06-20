#include <iostream>

int fibb(int n);

int main()
{
    int n = 0;
    std::cout << "Введите число: ";
    std::cin >> n;

    std::cout << "Числа Фибоначчи: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << fibb(i) << " ";
    }
	
	return 0;
}

int fibb(int n)
{
	if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibb(n - 1) + fibb(n - 2));
    }
}
