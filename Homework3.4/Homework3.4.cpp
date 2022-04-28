#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int ** M, * A;
	float sr = 0;
	int m_size, a_size;
	std::cout << "Введите размер матрицы:";
	std::cin >> m_size;
	a_size = m_size;
	srand(time(0));
	M = new int* [m_size];
	A = new int [a_size];

	for (int i = 0; i < m_size; i++)
	{
		M[i] = new int[m_size];

		for (int j = 0; j < m_size; j++) {
			M[i][j] = 1 + rand() % 10;
		}
	}
	
	for (int i = 0; i < m_size; i++) {
		for (int j = 0; j < m_size; j++) {
			std::cout << M[i][j]<<" ";
		}
		std::cout <<std::endl;
	}
	



	
	std::cout << "Массив минимальных значений: ";
	
	for (int i = 0; i < m_size; i++) {
		
		int min = 11;
		
		for (int j = 0; j < m_size; j++) {
			if (M[j][i] < min) {
				min = M[j][i];
			}
		}
		
		A[i] = min;
		
		std::cout << A[i]<<", ";
	}
	
	for (int i = 0; i < a_size; i++) {
		sr += A[i];
	}
	
	sr /= a_size;

	std::cout << std::endl<< "Среднее арифметическое: "<<sr;

	delete[] A;
	system("pause");
}
