#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
 

    setlocale(LC_ALL, "Russian");
    double a, b,h;
    double A[32] = { 0 };
    double max_argument;
    int max_index;


    std::cout << "Введите значение a\n";
    std::cin >> a;
    std::cout << "Введенное значение: " << a << std::endl;

    std::cout << "Введите значение b\n";
    std::cin >> b;
    std::cout << "Введенное значение: " << b << std::endl;

    std::cout <<( "Введите значение h\n");
    std::cin >> h;
    std::cout << "Введенное значение: " << h << std::endl;
    max_argument = a;
    max_index = 0;
    int i;
    i = 0;

    while (a <= b) {
        A[i] = pow((3), a);
        std::cout << "y(" << a << ")" << " = " << A[i] << std::endl;
       a = a + h;
       i++;
    }
   
     for (int b = 1; b < 32; b++) {
        if (A [max_index] < A[b]) {
            max_index = b;
        }
    }
     //for (int k = 0; k < max_index; k++){
       //  max_argument += h;
     //}
     cout << "Максимальное значение: " << A[max_index] << endl;
     cout << "Соответствующие значение аргумента: " << max_argument << endl;
    return 0;
}