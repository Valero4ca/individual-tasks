#include <iostream>
#include <string.h>
#include <conio.h>


using namespace std;

#define N 5

struct reises
{
    int number;
    char reis[50];
    char type[50];
    char punct[50];
    float time1;
    float time2;
};



int main()
{
    const int sz = 7;
    setlocale(LC_ALL, "");
    reises af[sz];
    cout << "Введите данные автобуса: \n";
    for (int i = 0; i < sz; ++i)
    {
        cout << "Номер рейса: ";
        cin.getline(af[i].punct, 50);
        cout << "Тип автобуса: ";
        cin >> af[i].number;
        cout << "Пункт назначения  ";
        (cin >> af[i].type).get();
        cout << "Введите время отправления: ";
        cin >> af[i].time1;

    }
    for (int i = 0; i < sz; ++i)
    {
        for (int j = i + 1; j < sz; ++j)
        {
            if (af[j].number < af[i].number)
            {
                reises temp = af[i];
                af[i] = af[j];
                af[j] = temp;
            }
        }
    }
    char punct[50];
    cout << "Введите пункт назначения: ";
    cin.getline(punct, 50);
    bool find = false;
    for (int i = 0; i < sz; ++i)
    {
        if (!strcmp(af[i].punct, punct))
        {
            find = true;
            cout << "Номер рейса: " << af[i].number << '\n'
                << "Тип автобуса: " << af[i].type << '\n';
        }
    }

    if (!find)
    {
        cout << "Рейс которым можно воспользоваться" << endl;
    }

    
    return 0;


}