#include <iostream>

double* create_array(int size);
void printArray(double* arr, int size);
void removeArray(double* arr);

int main()
{
	int size{};

	std::cout << "Введите размер массива: ";
	std::cin >> size;

	double* arr = create_array(size);
	printArray(arr, size);
	removeArray(arr);

	return EXIT_SUCCESS;
}

double* create_array(int size)
{
	return new double[size] {};
}

void printArray(double* arr, int size)
{
	std::cout << "Массив: ";
	for (int index{}; index < size; index++)
	{
		std::cout << arr[index] << " ";
	}
}

void removeArray(double* arr)
{
	delete[] arr;
}