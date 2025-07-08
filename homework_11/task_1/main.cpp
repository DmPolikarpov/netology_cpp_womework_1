#include <iostream>
#include <string>

int main()
{

	std::string firstName{}, lastName{};

	std::cout << "¬ведите им€: ";
	std::cin >> firstName;

	std::cout << "¬ведите фамилию: ";
	std::cin >> lastName;

	std::cout << "«дравствуйте, " << firstName + " " + lastName << std::endl;

	return EXIT_SUCCESS;
}