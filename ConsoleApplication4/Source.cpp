#include<stdio.h>
#include <locale.h>
#include<iostream>
#include <math.h>
#include <time.h>
#include <stdint.h>
#include <string.h>
#include "Header.h"


using namespace std;



#define size 30

int main()

{

	setlocale(LC_ALL, "Russian");

	int n;

	do
	{
		printf("Введите номер пункта: ");
		scanf("%d", &n);
		cin.get();
		switch (n) {

		case 1:
		{
			//1.	В заданной строке заменить каждый символ строки следующим по коду символом. Букву «я» заменить пробелом.
			char str[10];
			printf("Введите строку: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);
			changeSymbol(str, k);
			printf("%s\n", str);
		}
		break;


		case 2:
		{
			//2.	В заданной строке посчитать количество разных символов, входящих в эту строку
			char str[10];
			printf("Введите строку: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);
			int l = QuantityOfDifferentSymbols(str, k);
			printf("%d\n", l);
		}
		break;


		case 3:
		{
			//3.	В заданной строке расположить в обратном порядке все слова. Разделителями слов считаются пробелы
			char str[10];
			printf("Введите строку: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);
		}
		break;



		case 4:
		{
			//4.	В заданной строке посчитать количество слов, содержащих только строчные русские буквы. Разделителями слов считаются пробелы.
			char str[50];
			printf("Введите строку: \n");
			fgets(str, 50, stdin);
			int k = strlen(str);
			int l = rus(str, k);
			printf("%d\n", l);
		}
		break;


		case 6:
		{
			//6.	Дан массив символов. Подсчитать, сколько различных символов встречается в нем. Вывести их на экран
			char str[10];
			printf("Введите строку: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);
			dif(str, k);
		}
		break;


		case 7:
		{
			//7.	Дан массив символов. Подсчитать самую длинную последовательность подряд идущих букв а.
			char str[50];
			printf("Введите строку: \n");
			fgets(str, 50, stdin);
			int k = strlen(str);
		}
		break;




		}

	} while (n > 0);

}