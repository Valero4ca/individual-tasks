

#include <iostream>

int main()
{
	setlocale(LC_ALL,"rus");
	int** M;
	int sr = 0;
	int x_size,y_size;

	srand(time(0));

	std::cout << "Введите количество строк:";
	std::cin >> x_size;
	std::cout << "Введите количество столбцов:";
	std::cin >> y_size;

	M = new int* [x_size];

	for (int i = 0; i < x_size; i++)
	{
		M[i] = new int[y_size];

		for (int j = 0; j < y_size; j++) {
			M[i][j] = 0 + rand() % 10;
		}
	}

	for (int i = 0; i < x_size; i++) {
		for (int j = 0; j < y_size; j++) {
			std::cout << M[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < x_size; i++) {
		for (int j = 0; j < y_size; j++) {
			if (M[j][i] == 0) {
				sr++;
				break;
			}
			else {
				continue;
			}
		}

	}
	std::cout << "Количество строк без нуля:" << y_size - sr << std::endl;
	
}

