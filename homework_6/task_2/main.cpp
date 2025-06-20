#include <iostream>

int getPower(int a, int b);

int main()
{
    int value{5}, power{2};
	getPower(value, power);

	value = 3;
	power = 3;
	getPower(value, power);

	value = 4;
	power = 4;
	getPower(value, power);
	
	return 0;
}

int getPower(int value, int power)
{
	int result = 1;
    for (int i = 0; i < power; i++)
	{
		result *= value;
	}
	std::cout << value << " в степени " << power << " = " << result << std::endl;
}
