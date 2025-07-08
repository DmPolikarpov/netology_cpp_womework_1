#include <iostream>
#include <string>

int main()
{
	std::string rightAnswer{ "Малина" }, userAnswer{};

	do
	{
		std::cout << "Угадайте слово: ";
		std::cin >> userAnswer;

		if (rightAnswer == userAnswer)
			std::cout << "Правильно! Вы победили! Загаданное слово — малина" << std::endl;
		else
			std::cout << "Неправильно" << std::endl;
	} while (rightAnswer != userAnswer);

	return EXIT_SUCCESS;
}