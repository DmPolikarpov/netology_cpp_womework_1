#include <iostream>
#include <string>

int main()
{
	std::string rightAnswer{ "������" }, userAnswer{};

	do
	{
		std::cout << "�������� �����: ";
		std::cin >> userAnswer;

		if (rightAnswer == userAnswer)
			std::cout << "���������! �� ��������! ���������� ����� � ������" << std::endl;
		else
			std::cout << "�����������" << std::endl;
	} while (rightAnswer != userAnswer);

	return EXIT_SUCCESS;
}