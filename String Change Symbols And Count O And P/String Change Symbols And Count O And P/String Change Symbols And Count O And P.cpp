#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

// Функция определения длины строки
int len_str(char* str)
{
	int i = 0;
	while (*(str + i))
	{
		i++;
	}
	return i;
}
void main()
{
	// Функция посимвольного ввода строки до нажания ENTER
	setlocale(LC_ALL, "ru");
	puts("Введите строку:");
	char* str = (char*)calloc(80, sizeof(char));
	int i = 0;
	while ((*(str + i++) = (char)getchar()) != '\n');
	*(str + --i) = '\0';
	str = (char*)realloc(str, i + 1);
	cout << endl << str << endl;

	for (int i = 0; i < str[i] != 0; i++)
	{
		if (str[i] == 'a' && str[i + 1] == '?')
		{
			str[i + 1] = ' ';
		}
	}
	cout << endl << "Измененная строка:" << endl << str << endl;
	int P = 0;
	int O = 0;
	for (int i = 0; i < str[i] != 0; i++)
	{
		if (str[i] == 'P')
		{
			P++;
		}
	}
	for (int i = 0; i < str[i] != 0; i++)
	{
		if (str[i] == 'O')
		{
			O++;
		}
	}
	cout << endl << "Количество символов P: " << P << endl;
	cout << endl << "Количество символов O: " << O << endl << endl;
	system("pause");
}