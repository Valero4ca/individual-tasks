#include <iostream>


int function(int *array_pointer) {
    array_pointer[0] = 25;
    return 0;
}


int main()
{
    setlocale(LC_ALL, "RUS");
    int a = 10;
    int *pol = &a;
    std::cout << "а: " << a <<std::endl;
    std::cout << "а: " << &a << std::endl;
    std::cout << "а: " << pol << std::endl;
    std::cout << "а: " << &pol << std::endl;
    std::cout << "а: " << pol << std::endl;
    std::cout << "а: " << *pol << std::endl;

    int *fol = new int[10];

    for (int a = 0; a < 10; a++) {
        fol[a] = 0;
    }
    std::cout << fol << std::endl;
    std::cout << &fol[0] << std::endl;
    std::cout << fol[0] << std::endl;

    int tet[90];
    int i = 0;
    while (i < 10) {
        i++;
    }
    for (int m = 0; m < 90; m++) {
        tet[m] = m;
    }
    std::cout << tet << std::endl;
    std::cout << &tet[0] << std::endl;
    std::cout << tet[89] << std::endl;

}