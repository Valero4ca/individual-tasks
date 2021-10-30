#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, h, y;
    
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

        y = -log(abs(2 * sin(a / 2)));
        std::cout << "y(" << a << ")" << " = " << y << std::endl;

        a = a + h;
    }
                                        
    return 0;
}

