#include <iostream>
#include <math.h>

using namespace std;

double summ(double x, double k)
{
    return (pow(-1, k + 1) * (x, 2 * k + 1)) / (4 * k - 1);;
}

double uravn(double x)   // Основное уравнение 1
{
    return ((1 + x * x) / 2) * atan(x) - x / 2;     // значение функции
}

void rez(double a, double b, double h, int n) // a - откуда b - до , h - шаг, 
{
    double r, k, s, x;

    std::cout << "Результаты вычислений:" << std::endl;

    for (x = a; x <= b; x += h)
    {

        s = r = 1;

        std::cout << "Y(" << x << "): " << uravn(x) << std::endl;

        for (k = 0; k <= n; ++k)
        {
            s += summ(x, k);
            std::cout << "\tS(" << x << "), при k = " << k << ": " << s << std::endl;
        }
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