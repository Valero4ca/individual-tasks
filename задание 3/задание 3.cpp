#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");
    char text[30];
    char symbol;
    int counter = 0;
    cout << "Ведите строку для анализа :" << endl;
    gets_s(text);
    cout << "ВВедите символ для поиска:" << endl;
    cin >> symbol;
    int k = strlen(text);

    for (int i = 0; i<=k; i++) {
        if (text[i] == symbol)
          
        counter++;
    }
      cout << counter<< "->" << symbol << endl;
      
      return 0;
}
