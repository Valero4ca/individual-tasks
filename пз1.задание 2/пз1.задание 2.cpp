#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, h, y,x;
    float max, min;
    

    std::cout << "Введите значение a\n";
    std::cin >> a;
    std::cout << "Введенное значение: " << a << std::endl;

    std::cout << "Введите значение b\n";
    std::cin >> b;
    std::cout << "Введенное значение: " << b << std::endl;

    
  
    

    std::cout << "Введите максимальное значение:";
    std::cin >> max;

     
    if (a <= b) {

        y = (max * (a, b) + sqrt(a));
            

           
        std::cout << "y(" << a << ")" << " = " << y << std::endl;

        
    }

    return 0;
}

