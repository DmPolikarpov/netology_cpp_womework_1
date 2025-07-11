#include <iostream>
#include <fstream>
#include <string>

void printArray(int* arr, int size);
void removeArray(int* arr);

int main()
{
	std::ifstream iText("in.txt");

	if (iText.is_open())
	{
		int size{}, count{};
		std::string data{};
		iText >> size;
		int* arr = new int[size] {};

		while (iText >> data)
		{
			arr[count] = std::stoi(data);
			count++;
		}

		printArray(arr, size);
		removeArray(arr);
	}
	else
	{
		std::cout << "some error happened!" << std::endl;
	}

	iText.close();

	return EXIT_SUCCESS;
}

void printArray(int* arr, int size)
{
	for (int index{ size - 1 }; index >= 0; index--)
	{
		std::cout << arr[index] << " ";
	}
}

void removeArray(int* arr)
{
	delete[] arr;
}