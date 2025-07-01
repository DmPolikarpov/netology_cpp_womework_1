#include <iostream>

void print(int* arr, int size);
void swap(int* a, int* b);
void reverse(int* arr, int size);

int main()
{
	const int size{ 9 }, size1{ 4 };

	int arr[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arr1[size1]{ 2, 3, 4, 5 };

	std::cout << "До функции reverse: ";
	print(arr, size);
	std::cout << "До функции reverse: ";
	print(arr1, size1);

	reverse(arr, size);
	reverse(arr1, size1);

	std::cout << "После функции reverse: ";
	print(arr, size);
	std::cout << "После функции reverse: ";
	print(arr1, size1);

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

void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void reverse(int* arr, int size)
{
	if (size == 0 || size == 1)
		return;
	for (int index = 0; index < size / 2; index++)
	{
		swap(&arr[index], &arr[size - index - 1]);
	}
}