#include <iostream>
#include <fstream>

int main()
{
	std::ifstream iText("in.txt");

	if (iText.is_open())
	{
		std::string data{};

		while (iText >> data)
		{
			std::cout << data << std::endl;
		}
	}
	else
	{
		std::cout << "some error happened!" << std::endl;
	}

	iText.close();

	return EXIT_SUCCESS;
}