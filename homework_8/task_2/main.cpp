#include <iostream>

namespace math
{
	namespace addition
	{
		int calc(int a, int b)
		{
			return a + b;
		}
	}
	namespace substraction
	{
		int calc(int a, int b)
		{
			return a - b;
		}
	}
	namespace multiplication
	{
		int calc(int a, int b)
		{
			return a * b;
		}
	}
	namespace division
	{
		int calc(int a, int b)
		{
			return a / b;
		}
	}
}

int main()
{
	int x{ 6 }, y{ 9 };

	std::cout << "Сложение: " << math::addition::calc(x, y) << std::endl;
	std::cout << "Вычитание: " << math::substraction::calc(x, y) << std::endl;
	std::cout << "Умножение: " << math::multiplication::calc(x, y) << std::endl;
	std::cout << "Деление: " << math::division::calc(x, y) << std::endl;
}