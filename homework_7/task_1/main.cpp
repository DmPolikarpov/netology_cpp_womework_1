#include <iostream>

int main()
{
	int variable1{ 1 };
	short variable2{ 2 };
	long variable3{ 3 };
	long long variable4{ 4 };
	float variable5{ 5.f };
	double variable6{ 6.0 };
	long double variable7{ 7.0 };
	bool variable8{ true };

	std::cout << "int: " << &variable1 << " " << sizeof(variable1) << std::endl;
	std::cout << "short: " << &variable2 << " " << sizeof(variable2) << std::endl;
	std::cout << "long: " << &variable3 << " " << sizeof(variable3) << std::endl;
	std::cout << "long long: " << &variable4 << " " << sizeof(variable4) << std::endl;
	std::cout << "float: " << &variable5 << " " << sizeof(variable5) << std::endl;
	std::cout << "double: " << &variable6 << " " << sizeof(variable6) << std::endl;
	std::cout << "long double: " << &variable7 << " " << sizeof(variable7) << std::endl;
	std::cout << "bool: " << &variable8 << " " << sizeof(variable8) << std::endl;

	return EXIT_SUCCESS;
}