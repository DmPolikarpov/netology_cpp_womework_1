#include <iostream>
#include <string>

int main()
{

	std::string firstName{}, lastName{};

	std::cout << "������� ���: ";
	std::cin >> firstName;

	std::cout << "������� �������: ";
	std::cin >> lastName;

	std::cout << "������������, " << firstName + " " + lastName << std::endl;

	return EXIT_SUCCESS;
}