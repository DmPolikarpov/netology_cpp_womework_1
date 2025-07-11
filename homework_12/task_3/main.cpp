#include <iostream>
#include <fstream>

void fillArray(int* arr, int size);
void removeArray(int* arr);

int main()
{
	int size{};
	std::cout << "¬ведите размер массива: ";
	std::cin >> size;

	int* arr = new int[size] {};

	fillArray(arr, size);

	std::ofstream oText("out.txt");

	if (oText.is_open())
	{
		oText << size << std::endl;
		
		for (int i{}; i < size; i++)
		{
			oText << arr[i] << " ";
		}
	}
	else
	{
		std::cout << "some error happened!" << std::endl;
	}

	oText.close();

	removeArray(arr);

	return EXIT_SUCCESS;
}

void fillArray(int* arr, int size)
{
	for (int index{}; index < size; index++)
	{
		std::cout <<  "¬ведите значение: ";
		std::cin >> arr[index];
	}
}

void removeArray(int* arr)
{
	delete[] arr;
}