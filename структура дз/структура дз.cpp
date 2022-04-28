#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

#include<clocale>
struct Student
{
	char name[32];
	int marks;

};

struct Student list[30];
int current = 0;

void enter_new();
void fmarks();

int main() {
	{
		setlocale(LC_ALL, "RUS");
		Student s;
		enter_new();
		fmarks();
		return 0;
	}
	void enter_new();
	{
		int current = 0;
		for (int i = 0; i < 2; i++)
		{
			cout << "Ввод информации:" << endl;
			if (current < 2) {

				cout << "Строка: ";
				cout << current + 1;
				cout << endl << "Фамилия" << endl;
				cin >> list[current].name;
				cout << list[current].marks;
				current++;


			}
			else
				cout << "Введено максимальное количество строк";
		}
	}

	void fmarks();
	{
		for (int i = 0; i < 2; i++) {
			if (list[i].marks > 7)
			{
				cout << list[i].name << "Имеет средний балл не выше 8" << list[i].marks << endl;
			}
		}

	}
	system("pause");
	return 0;
}