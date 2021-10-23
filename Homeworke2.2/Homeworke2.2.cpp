#include <iostream>
int random(int min, int max) {
    int value = rand() % max + min;
    return value;
}

int main() {
    setlocale(LC_ALL, "Russian");
    
    int array_size1;
    int array_size2;
    int min_val;

    std::cout << "Введите размер 1 массива: ";
    std::cin >> array_size1;
    
    std::cout << "Введите размер 2 массива: ";
    std::cin >> array_size2;
    
    int *array1 = new int[array_size1];
    int *array2 = new int[array_size2];
    int min, max;
    
    std::cout << "Введите минимальное значение:";
    std::cin >> min;

    std::cout << "Введите максимальное значение:";
    std::cin >> max;
    
    std::cout << "1 массив:" << std::endl;
    for (int i = 0; i < array_size1; i++) {
        array1[i] = random(min, max);
        std::cout << "[" << i << "]: " << array1[i] << std::endl;
    }

    std::cout << "2 массив:" << std::endl;
    for (int i = 0; i < array_size2; i++) {
        array2[i] = random(min, max);
        std::cout << "[" << i << "]: " << array2[i] << std::endl;
    }

    //Сортируем первый массив от большего к меньшему пузырьком

    for (int i = 0; i < array_size1; i++) {
        for (int j = 0; j < array_size1 - 1; j++) {
            if (array1[j] > array1[j + 1]) {
                int temp = array1[j + 1];
                array1[j + 1] = array1[j];
                array1[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < array_size1; i++) {
        min_val = array1[i];
        int j = 0;
        while (j < array_size2) {
            if (array2[j] == min_val) {
                break;
            }
            j++;
        }
        if (j == array_size2 && i < array_size1) {
            std::cout << "Минимальное неповторяющееся  значение: " << min_val << std::endl;
            break;
        }
        else if (i == array_size1 - 1) {
            std::cout << "Минимальное неповторяющееся  значение: " << "Такого значения нет!" << std::endl;
            break;
        }
    }

    return 0;
}
