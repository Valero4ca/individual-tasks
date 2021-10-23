#include <iostream>
#include <cstdlib>
#include "../Core/core.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите размер массива: ";
    int array_size;
    //Создаём переменную для хранения размера массива
    float min, max;
    //Создаём переменные для хранения диапазона значений
    int pol = 0, otr = 0;
    std::cin >> array_size;
    //Записываем в переменную размер массива из консоли
    float *array = new float[array_size];
    //Создаём динамический массив размера array_size
    //[Тип данных] [Имя переменной] = new(Операто выделения памяти) [Тип данных][Размер выделяемой памяти]
    
    std::cout << "Введите минимальное значение:";
    std::cin >> min;
    
    std::cout << "Введите максимальное значение:";
    std::cin >> max;

    std::cout << std::endl << "Сгенерированный массив:" << std::endl;

    for (int i = 0; i < array_size; i++) {
        array[i] = random_float(min,max);
        std::cout <<"[" << i << "]: " << array[i] << std::endl;
    }

    for (int i = 0; i < array_size; i++) {
        if (array[i] >= 0) {
            pol++;
        }
        else {
            otr++;
        }
    }
    
    float* array_pol = new float[pol];
    float* array_otr = new float[otr];
    int a = 0, b = 0;

    for (int i = 0; i < array_size; i++) {
        if (array[i] >= 0) {
            array_pol[a] = array[i];
            a++;
        }
        else {
            array_otr[b] = array[i];
            b++;
        }
    }

    std::cout << std::endl << "Положительные числа по убыванию: " << std::endl;

    BubleSortFloat(array_pol, pol, 0);

    for (int i = 0; i < pol; i++) {
        std::cout << "[" << i << "]: " << array_pol[i] << std::endl;
    }

    std::cout << std::endl << "Отрицательные числа по возрастанию: " << std::endl;

    BubleSortFloat(array_otr, otr, 1);

    for (int i = 0; i < otr; i++) {
        std::cout << "[" << i << "]: " << array_otr[i] << std::endl;
    }
    

    return 0;
}

