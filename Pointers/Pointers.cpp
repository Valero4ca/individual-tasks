#include <iostream>


int function(int *array_pointer) {
    array_pointer[0] = 25;
    return 0;
}


int main()
{
    setlocale(LC_ALL, "RUS");
    int a = 11;
    int* pointer;
    pointer = &a;
    std::cout << "Обращаясь к указателю мы получаем адрес переменной 'a': " << pointer << std::endl;
    std::cout << "Обращаясь к указателю по пдресу получаем значение в переменной 'a': " << *pointer << std::endl;
    int *array = new int[10];
    function(array);
    std::cout << array[0];
}