//#include <iostream>
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//using namespace std;
//struct Spisok {
//	char Fio[20];
//	char Grup[10];
//	int Ot[3];
//	float S_Bal;
// } *sved;
//int Vvod(int nom, struct Spisok* sved) {
//	printf("\n Vvedi svedenia %d", (nom + 1));
//	puts("\n FIO -");
//	/cin(sved-> Fio,sizeof(sved->Fio));*/
// 
//	fgets(sved->Fio, sizeof(sved->Fio), stdin);
//	puts("Nomer Gr -");
//
//
//	fgets(sved->Grup, sizeof(sved->Grup), stdin);
//	/* или gets_s(sved->Grup, sizeof(sved-> Grup) ); */
//	float s = 0;
//	for (int i = 0; i < 3; i++) {
//		cout << ("\n Otcenka % d -> ",i+1);
//			cin >> sved->Ot[i];
//		/* или с помощью функции scanf(): scanf(“%d”,&(sved->Ot[i])); */
//		s += sved->Ot[i];
//	}
//	sved->S_Bal = s / 3.;
//	return 0;
//}
//int main()
//{
//	struct Spisok Stud[50]; /* массив для списка группы */
//	int i, N;
//	char Bukva;
//	system("cls");
//	puts("\n Vvedi kol-vo < 50 ");
//	cin >> N;
//	for (i = 0; i < N; i++)
//		Vvod(i, &Stud[i]); 
//	puts("Spisok Students\n");
//		for (i = 0; i < N; i++)
//			printf("%20s %10s %4.2f\n", Stud[i].Fio, Stud[i].Grup, Stud[i].S_Bal);
//	puts("\n Poisk FIO po bukve. Vvedi bukvu: ");
//	cin >> Bukva;
//	puts("\n Sveden Students");
//	int kod_p = 0;
//	for (i = 0; i < N; i++)
//		if (Stud[i].Fio[0]==Bukva)
//		{
//			kod_p = 1;
//			printf("\n %20s %10s %4.2f", Stud[i].Fio, Stud[i].Grup, Stud[i].S_Bal);
//		}
//	if (kod_p==0) cout << " Takix HET!";
//	cout << ("\n The program is finished! Press any key...");
//	system("pause");
//	return 0;
//}




////////////////Пример2

//#include <stdlib.h>
//#include <stdio.h>
//#define k 2
//#define PE printf("\n ..SALARY PER WEEK (%d)......", k); #define PE1 printf("\n==========================");
//#define PE2 printf("\n");
//using namespace std;
//struct fund {
//	char week1[20];
//	float salary1;
//	char week2[20];
//	float salary2;
//};
//float sum(float x, float y)
//{
//	system("cls"); PE; PE1; PE2;
//	return(x + y);
//}
//int main()
//{
//	static struct fund st = { "AUG_1_7",200,"AUG_8_15",215.5 };
//	float res;
//	res = sum(st.salary1, st.salary2);
//	printf(" \n Total sum: from %s to %s is %8.2f rub.\n", st.week1, st.week2, res);
//	PE2; PE1;
//	system("pause");
//}
 //////////Пример3///




//#include<stdio.h>
//#include<stdlib.h>
//using namespace std;
//struct spis {
//	char month1[20];
//	float salary1;
//	char month2[20];
//	float salary2;
//};
//float sum(struct spis* t)
//{
//	system("cls");
//	return((t->salary1) + (t->salary2));
//
//}
// 
//int main()
//
//{
//	static struct spis str = { "september",550.8,"octember",580.2 };
//	float res;
//	res = sum(&str);
//	printf("Total sum: sal in %s+sal in %s=%8.2f rb.\n", str.month1, str.month2, res);
//	system("pause");
//
//}

////////////Пример4
//# include <iostream>
//# define str_len 30
//# define size 30
//using namespace std;
//int choice;
//struct Student
//{
//	char name[str_len];
//	int year_of_birth;
//	char department[5];
//};
//struct Student list_of_student[size];
//struct Student bad;
//int current_size = 0;
//void enter_new()
//{
//	cout << "ввод информации" << endl;
//	if (current_size < size)
//	{
//		cout << "строка № ";
//		cout << current_size + 1;
//		cout << endl << " фамилия" << endl;
//		cin >> list_of_student[current_size].name;
//		cout << "год рождения " << endl;
//		cin >> list_of_student[current_size].year_of_birth;
//		cout << "факультет " << endl;
//		cin >> list_of_student[current_size].department;
//		current_size++;
//	}
//	else
//		cout << "введено максимальное количество строк ";
//	cout << " пункт меню ?" << endl;
//	cin >> choice;
//}
//void del()
//{
//	int d;
//	cout << "\n № удаляемой строки (если все, нажать 99)" << endl;
//	cin >> d;
//	if (d != 99)
//	{
//		for (int de1 = (d - 1); de1 < current_size; de1++)
//			list_of_student[de1] = list_of_student[de1 + 1];
//		current_size = current_size - 1;
//	}
//	if (d == 99)
//		for (int i = 0; i < size; i++)
//			list_of_student[i] = bad;
//	cout << " пункт меню ?" << endl;
//	cin >> choice;
//}
//void change()
//{
//	int n, per;
//	cout << "\n введите номер строки " << endl; cin >> n;
//	do
//	{
//		cout << "введите: " << endl;
//		cout << "1- изменить фамилию " << endl;
//		cout << "2-изменить год рождения" << endl;
//		cout << "3-изменить факультет" << endl;
//		cout << "4-конец\n";
//		cin >> per;
//		switch (per)
//		{
//		case 1: cout << "новая фамилия";
//			cin >> list_of_student[n - 1].name; break;
//		case 2: cout << "год рождения ";
//			cin >> list_of_student[n - 1].year_of_birth; break;
//		case 3: cout << "факультет ";
//			cin >> list_of_student[n - 1].department; break;
//		}
//	} while (per != 4);
//	cout << "пункт меню? " << endl;
//	cin >> choice;
//}
//void out()
//{
//	int sw, n;
//	cout << "1-вывод 1 строки" << endl;
//	cout << "2-вывод всех строк " << endl;
//	cin >> sw;
//	if (sw == 1)
//	{
//		cout << "номер выводимой строки " << endl; cin >> n; cout << endl;
//		cout << "фамилия ";
//		cout << list_of_student[n - 1].name << endl;
//		cout << "год рождения ";
//		cout << list_of_student[n - 1].year_of_birth << endl;
//		cout << "факультет ";
//		cout << list_of_student[n - 1].department << endl;
//	}
//	if (sw == 2)
//	{
//		for (int i = 0; i < current_size; i++)
//		{
//			cout << "фамилия ";
//			cout << list_of_student[i].name << endl;
//			cout << "год рождения ";
//			cout << list_of_student[i].year_of_birth << endl;
//			cout << "факультет ";
//			cout << list_of_student[i].department << endl;
//		}
//	}
//	cout << "пункт меню?" << endl;
//	cin >> choice;
//}
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	cout << "данных нет " << endl;
//	cout << "введите:" << endl;
//	cout << "1-для удаления записи " << endl;
//	cout << "2-для ввода новой записи" << endl;
//	cout << "3-для изменения записи" << endl;
//	cout << "4-для вывода записи (ей) " << endl;
//	cout << "5-для выхода" << endl;
//	cin >> choice;
//	do
//	{
//		switch (choice)
//		{
//		case 1: del(); break;
//		case 2: enter_new(); break;
//		case 3: change(); break;
//		case 4: out(); break;
//		}
//	} while (choice != 5);
//}
// 
////////индивидуальное задание 6
#include<stdio.h>
# include <iostream>

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
 
int main(){
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
	for (int i= 0; i < 2; i++) {
		if (list[i].marks > 7)
		{
			cout << list[i].name << "Имеет средний балл не выше 8" << list[i].marks << endl;
		}
	}
	
}
system("pause");
return 0;
}