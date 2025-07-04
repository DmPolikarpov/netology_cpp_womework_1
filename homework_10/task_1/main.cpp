#include <iostream>

void fillArray(int* arr, int size);
void printArray(int* arr, int size);
void removeArray(int* arr);

int main()
{
	int size{};

	std::cout << "¬ведите размер массива: ";
	std::cin >> size;

	int* arr = new int[size]{};

	fillArray(arr, size);
	printArray(arr, size);
	removeArray(arr);

	return EXIT_SUCCESS;
}

void fillArray(int* arr, int size)
{
	for (int index{}; index < size; index++)
	{
		std::cout << "arr[" << index << "] = ";
		std::cin >> arr[index];
	}
}

void printArray(int* arr, int size)
{
	std::cout << "¬ведЄнный массив: ";
	for (int index{}; index < size; index++)
	{
		std::cout << arr[index] << " ";
	}
}

void removeArray(int* arr)
{
	delete[] arr;
}