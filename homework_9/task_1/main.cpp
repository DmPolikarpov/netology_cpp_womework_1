#include <iostream>

void print(int* arr, int size);

int main()
{
	const int size{ 9 }, size1{ 4 }, size2{ 5 };

	int arr[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arr1[size1]{ 6, 5, 4, 8 };
	int arr2[size2]{ 1, 4, 3, 7, 5 };

	print(arr, size);
	print(arr1, size1);
	print(arr2, size2);

	return EXIT_SUCCESS;
}

void print(int* arr, int size)
{
	for (int index = 0; index < size; index++)
	{
		std::cout << arr[index] << " ";
	}
	std::cout << std::endl;
}