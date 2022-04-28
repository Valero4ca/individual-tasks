#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<locale.h>
#include<time.h>
using namespace std;

double* pfmin(double* p, int n, int* index_min);

double* pfmax(double* p, int n, int* index_max);

void swap(int index_min, int index_max, int n, double* B);

int main()
{
	setlocale(LC_ALL, "rus");
	double rez_min;
	double rez_max;
	int p_index_max = 0;
	int p_index_min = 0;
	int col_vo;
	int const kol_vo_const = 39;
	double B[kol_vo_const];
	cout << "Ввдеите количество элементов: " << endl;
	cin >> col_vo;
	srand(time(NULL));
	for (int i = 0; i < col_vo; i++)
	{
		B[i] = double(20 + rand() % 1000 - 300) / 15;
		printf("%2.2lf ", B[i]);
	}
	cout << endl;
	rez_min = *pfmin(B, col_vo, &p_index_min);
	printf("\n min = %2.2lf   ", rez_min);
	cout << " index_min: " << p_index_min;
	rez_max = (*pfmax(B, col_vo, &p_index_max));
	printf("\n max = %2.2lf   ", rez_max);
	cout << " index_max: " << p_index_max;
	cout << endl;
	cout << endl;
	swap(p_index_min, p_index_max, col_vo, B);
	/*double temp;
	temp = B[p_index_min];
	B[p_index_min] = B[p_index_max];
	B[p_index_max] = temp;
	cout << endl;*/
	/*for (int i = 0; i < col_vo; i++)
	{
		printf("%2.2lf ", B[i]);
	}*/
	cout << endl;
	cout << endl;
	return 0;
}
void swap(int index_min, int index_max, int n, double* B)
{
	double temp;
	temp = B[index_min];
	B[index_min] = B[index_max];
	B[index_max] = temp;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		printf("%2.2lf ", B[i]);
	}
}

double* pfmin(double* p, int n, int* index_min)
{
	double* pmin;
	*index_min = 0;
	for (pmin = p; n > 0; p++, n--)
		if (*p < *pmin)
		{
			pmin = p;
			*index_min = n;
		}
	return pmin;
}


double* pfmax(double* p, int n, int* index_max)
{
	double* pmax;
	*index_max = 0;
	for (pmax = p; n > 0; p++, n--)
		if (*p > *pmax)
		{
			pmax = p;
			*index_max = n;
		}
	return pmax;
}
