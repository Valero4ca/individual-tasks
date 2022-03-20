#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	
	int** M, strnum;
	int m_size,sum=0;
	
	std::cout << "Введите размер матрицы:";
	std::cin >> m_size;

	srand(time(0));

	M = new int* [m_size];

	for (int i = 0; i < m_size; i++)
	{
		M[i] = new int[m_size];

		for (int j = 0; j < m_size; j++) {
			M[i][j] = 1 + rand() % 10;
		}
	}

	for (int i = 0; i < m_size; i++) {
		for (int j = 0; j < m_size; j++) {
			std::cout << M[i][j] << " ";
		}
		std::cout << std::endl;
	}

	int min = 11;
	
	for (int i = 0; i < m_size; i++) {
		for (int j = 0; j < m_size; j++) {

			if (M[i][j] < min) {
				min = M[i][j];
				strnum = i;

			}
		}
	}

	std::cout << "Минимальное число: " << min << std::endl;
	std::cout << "Номер строки: " << strnum << std::endl;

	for (int i = 0; i < m_size; i++) {
		sum += M[strnum][i];
	}

	std::cout << "Сумма элементов строки:" << sum;
}
