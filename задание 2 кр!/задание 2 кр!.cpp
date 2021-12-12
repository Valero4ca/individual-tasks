#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");
    int array_size;
    int min, max;
    int result = 1;

    int min_index = 0;

    std::cout << "Введите размер массива\n";
    std::cin >> array_size;
    std::cout << "Введенное значение: " << array_size << std::endl;

    std::cout << "Введите начало диапазона случайных значений\n";
    std::cin >> min;
    std::cout << "Введенное значение: " << min << std::endl;

    std::cout << "Введите конец диапазона случайных значений\n";
    std::cin >> max;
    std::cout << "Введенное значение: " << max << std::endl;

    int* array = new int[array_size];

    cout << "Сгенерированный массив:" << endl;

    for (int i = 0; i < array_size; i++) {
        array[i] = rand() % max + min;
        cout << "[" << i << "]: " << array[i] << endl;
    }

    for (int i = 0; i < array_size; i++) {
        if (array[i] % 2 == 0) {
            result += array[i];
        }
    }

    for (int i = 0; i < array_size; i++) {
        if (array[min_index] > array[i]) {
            min_index = i;
        }
    }

    array[min_index] = result;

    cout << "Результат умножения чётных элементов массива: " << result << endl;

    cout << "Полученный массив: " << endl;
    for (int i = 0; i < array_size; i++) {
        cout << "[" << i << "]: " << array[i] << endl;
    }
    return 0;
}