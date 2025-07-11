#include <iostream>
#include <fstream>
#include <string>

int** createArray(int row, int column);
void printArray(int** arr, int rows, int columns);
void removeArray(int** arr, int rows);

int main()
{
	int rows{}, columns{}, row{}, column{};

	std::ifstream iText("in.txt");

	iText >> rows;
	iText >> columns;

	int** arr = createArray(rows, columns);

	if (iText.is_open())
	{
		std::string data{};

		while (iText >> data)
		{
			if (column == columns)
			{
				row++;
				column = 0;
			}

			arr[row][column] = std::stoi(data);
			column++;
		}

	}
	else
	{
		std::cout << "some error happened!" << std::endl;
	}

	iText.close();

	printArray(arr, rows, columns);

	removeArray(arr, rows);

	return EXIT_SUCCESS;
}

int** createArray(int row, int column)
{
	int** arr = new int* [row] {};

	for (int index{}; index < row; index++)
	{
		arr[index] = new int[column] {};
	}
	return arr;
}

void printArray(int** arr, int rows, int columns)
{
	for (int row{}; row < rows; row++)
	{
		for (int column{ columns - 1 }; column >= 0; column--)
		{
			std::cout << arr[row][column] << "\t";
		}
		std::cout << std::endl;
	}
}

void removeArray(int** arr, int rows)
{
	for (int row{}; row < rows; row++)
	{
		delete[] arr[row];
	}
	delete[] arr;
}