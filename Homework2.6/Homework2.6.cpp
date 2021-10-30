#include <iostream>
#include "../Core/core.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	int array_size;
	std::cout << "Введите размер массива ";
	std::cin >> array_size;
	int* array = new int[array_size];
	for (int i = 0; i < array_size; i++) {
		array[i]=random_int(1,10);
		std::cout <<"["<< i<<"] "<< array[i] << std::endl;
	}
	int result=0;
	for (int i = 1; i < array_size - 1; i++) {
		if (array[i - 1] <= array[i] && array[i] <= array[i + 1]) {
			result++;
		}

	}
	std::cout << "Результат "  << result  << std::endl;
}

