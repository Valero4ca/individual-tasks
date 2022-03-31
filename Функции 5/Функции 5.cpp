#include <iostream>
#include <math.h>


using namespace std;

double sumer(double x, double eps)
{
    
    double sum = x, term = x;
    x = x * x;
    for (int i = 3; fabs(x) / i > eps; i += 2) sum += (term *= x) / i;
    return 2 * sum;
}

double uravn(double x, int n)   // Основное уравнение 1
{
    double y;
    y = 1 + x*x/2 * atan(x) * atan(x) - x / 2;
    return x;                         // значение функции
}

void rez(double a, double b, double h, int n) // a - откуда b - до , h - шаг, 
{
    double r, k, s, x;
    for (x = a; x <= b; x += h)
    {
        s = r = 1;
        for (k = 0; k <= n; ++k)
        {
            r = (pow(-1,k+1)*(x, 2* k + 1)) / (4* k - 1);
            s += r;
        }

    }

    for (x = a; x <= b; x += h)
    {
        std::cout << "Результаты вычислений:\n" << "\tx=" << x << "\ty=" << rez << "\ts=" << s << std::endl;
    }
}


int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, r, k, h, s, x, y;
    int n;
    // Произвольные значения
    std::cout << "Задайте переменную a\n";
   std::cin >> a;
    std::cout << "Задайте переменную b\n";
    std::cin >> b;
    for (;;) // бесконечный цикл
    {
        std::cout << "Задайте переменную h\n";
        std::cin >> h;
        if (h <= 0)
        {
            std::cout << "Неверное значение шага вычислений\n";
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            continue;
        }
        else
        {
            break;
        }

    }

    for (;;) // бесконечный цикл
    {
        std::cout << "Задайте переменную n\n";
        std::cin >> n;
        if (n <= 0)
        {
            std::cout << "Неверное значение количества выполнение операций\n";
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            continue;
        }
        else
        {

            break;
        }

    }

    rez(a, b, h, n);

    return 0;
}