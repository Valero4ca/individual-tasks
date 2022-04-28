#include <iostream>
#include <stdlib.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	FILE* fp;
	errno_t err; int rzm;
	char const* st = "привет";
	err = fopen_s(&fp, "a.txt", "w");
	if (err != 0)
	{
		perror("ошибка открытия a.txt");
		return EXIT_FAILURE;
	}
	rzm = fwrite(st, strlen(st), 1, fp);
	cout << "Записан " << rzm << " элемент" << endl;
	fclose(fp);
	return 0;
}