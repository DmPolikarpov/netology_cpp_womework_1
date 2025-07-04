#include <iostream>

int** create_two_dim_array(int row, int column);
void fill_two_dim_array(int** arr, int rows, int columns);
void print_two_dim_array(int** arr, int rows, int columns);
void delete_two_dim_array(int** arr, int rows);

int main()
{
	int row{}, column{};

	std::cout << "Введите количество строк: ";
	std::cin >> row;

	std::cout << "Введите количество столбцов: ";
	std::cin >> column;

	int** matrix = create_two_dim_array(row, column);
	fill_two_dim_array(matrix, row, column);
	print_two_dim_array(matrix, row, column);
	delete_two_dim_array(matrix, row);

	return EXIT_SUCCESS;
}



int** create_two_dim_array(int row, int column)
{
	int** arr = new int* [row] {};

	for (int index{}; index < row; index++)
	{
		arr[index] = new int[column] {};
	}
	return arr;
}

void fill_two_dim_array(int** arr, int rows, int columns)
{
	for (int row{}; row < rows; row++)
	{
		for (int column{}; column < columns; column++)
		{
			arr[row][column] = (row + 1) * (column + 1);
		}
	}
}

void print_two_dim_array(int** arr, int rows, int columns)
{
	std::cout << "Таблица умножения: " << std::endl;
	for (int row{}; row < rows; row++)
	{
		for (int column{}; column < columns; column++)
		{
			std::cout << arr[row][column] << "\t";
		}
		std::cout << std::endl;
	}
}

void delete_two_dim_array(int** arr, int rows)
{
	for (int row{}; row < rows; row++)
	{
		delete[] arr[row];
	}
	delete[] arr;
}