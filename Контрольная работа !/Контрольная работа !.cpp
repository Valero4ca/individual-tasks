#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");
    float a, y, x, h, b;
    std::cout << "Введите значение h\n";
    std::cin >> h;
    std::cout << "Введенное значение: " << h << std::endl;

    while (a<=b) {

        y = pow((3), x);
        std::cout << "y(" << a << ")" << " = " << y << std::endl;

        a = a + h;
    }
    int max_index;
    int A[5];
    max_index = 0;

    for (int b = 1; b < 5, b++) {
        if (A[max_index] < A[b]) {
            max_index = b;
        }
    }

    return 0;
}