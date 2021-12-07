#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
   
    setlocale(LC_ALL, "Russian");
    //Первое задание
   /*float a, b, h, y;

    std::cout << "Введите значение a\n";
    std::cin >> a;
    std::cout << "Введенное значение: " << a << std::endl;

    std::cout << "Введите значение b\n";
    std::cin >> b;
    std::cout << "Введенное значение: " << b << std::endl;

    std::cout << "Введите значение h\n";
    std::cin >> h;
    std::cout << "Введенное значение: " << h << std::endl;

    while (a <= b) {

        y = pow((a / 2), 2);
        std::cout << "y(" << a << ")" << " = " << y << std::endl;

        a = a + h;
    }*/
    //-----------------------------------------


    //Объявление и заполнение массива из консоли
    /*int A[5];
    
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
    }*/
    //-----------------------------------------

    //Вывод массива в консоль
    
    /*for (int i = 0; i < 5; i++) {
        cout << A[i];
    }*/
    //Массив с заменой 
    
    //-----------------------------------------

    //Поиск минимального значения в массиве
    /*int min;
    min = A[0];

    for (int b = 0; b < 4; b++) {
        if (A[b] > A[b+1]) {
            min = A[b+1];
        }
    }
    */
    //-----------------------------------------

    //Поиск максимального значения в массиве
    /*int max;
    max = A[0];

    for (int b = 0; b < 4; b++) {
        if (A[b] < A[b+1]) {
            max = A[b+1];
        }
    }
    */
    //-----------------------------------------

    //Поиск индекса максимального значения в массиве
    //int max_index;
    //max_index = 0;

    //for (int b = 1; b < 5; b++) {
    //    if (A[max_index] < A[b]) {
    //        max_index = b;
    //    }
    //}
    //-----------------------------------------

    //Поиск индекса минимального значения в массиве
    //int min_index;
    //min_index = 0;

    //for (int b = 1; b < 5; b++) {
    //    if (A[min_index] > A[b]) {
    //        min_index = b;
    //    }
    //}
    //-----------------------------------------
    
    //Поиск суммы между минимальным и максимальным элементом массива
    //int sum = 0;
    //if (min_index < max_index) {
    //    for (int t = min_index + 1; t < max_index; t++) {
    //        sum += A[t];
    //    }
    //}
    //else {
    //    for (int t = max_index + 1; t < min_index; t++) {
    //        sum += A[t];
    //    }
    //}


// Ввод текста из консоли
    //char text[100];
    //gets_s(text);
    //int temp=0;

    //for (int i = 0; i < 100; i++) {
    //    if (text[i] == ' ' || text[i] == '\0')
    //    {
    //        cout << temp;
    //        temp = 0;
    //        continue;
    //    }
    //    temp++;
    //}

int A[6] = { 1, 2, 3, 3, 3, 3 };
int temp, temp_col = 0;

for (int k = 0; k < 6; k++) {
    
    if (A[k] != -1) {
        temp = A[k];
    }
    else {
        continue;
    }

    for (int i = 0; i < 6; i++) {
        if (temp == A[i]) {
            temp_col++;
            A[i] = -1;
        }
    }
    
    cout << temp << "->" << temp_col << endl;
    
    temp_col = 0;

}
    return 0;
}

