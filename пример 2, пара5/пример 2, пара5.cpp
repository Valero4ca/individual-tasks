//#include<stdio.h>
//#include<ctype.h>
//#include <iostream>

//using namespace std;
//void letters(char* str);
//int main(void)
//{
//	char s[80];
//	puts("input char");
	//gets_s(s);

//	letters(s);
//	cout << endl;
//for (int t = 0; s[t]; ++t)
//	{

//		printf("%c", s[t]);
//	}
//	return 0;
//}
//void letters(char* str)
//{
//	for (int t = 0; str[t]; ++t)
//	{
//		str[t] = toupper(str[t]);
//		printf("%c", str[t]);
//	}
//}



//#include<stdio.h>
//#include<ctype.h>
//#include <iostream>

//using namespace std;
//int* pfmin(int* p, int n);
//{
  // int* prim;
//	for (prim = n; n > 0; p++, n--)
  // if (*p < *prim)prim = p;
//	return prin;
//}

//int main()

//{
//	int rez;
	//int B[5] = { -9,8,22,-6,47 };
	//for (int i = 0; i < 5; i++)
	//	printf("%d", B[i]);
	//rez = (*pfmin(B, 5)) * 10;
	//printf("\n min*10=%d", rez);

//}

//#include<stdio.h>
//#include<ctype.h>
//#include <iostream>
//void binPrn(unsigned num)
//{
//	if (num / 2)
//		binPrn(num / 2);
//	putchar(num % 2 + '0');
//}
//int main()
//{
//	int c;
	//while (1)
//	{
//		printf("Number: ");
//		if (scanf_s("%d", &c) != 1 || !c)
//			break;
//		binPrn(c);
//		putchar('\n');
	//}
//	return 0;
//}

#include<stdio.h>
#include<ctype.h>
#include <iostream>
using namespace std;
int* pfmin(int* p, int n);

{
	int* prim;
	for (prim = p; n > 0; p++, n--)
if (*p < *prim)
	prim = p;
return prim;
}
int main()

{
	int rez_min;
	int rez_max;
	int B[5] = { -9,8,22,-6,47 };
	for (int i = 0; i < 5; i++)
		printf("%d", B[i]);
	rez_min = (*pfmin(B, 5));
	rez_max = (*pfmax(B, 5));
	printf("\n min=%d", rez_min);
	printf("\n max=%d", rez_max)
}


