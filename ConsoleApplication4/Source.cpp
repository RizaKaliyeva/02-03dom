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
		printf("������� ����� ������: ");
		scanf("%d", &n);
		cin.get();
		switch (n) {

		case 1:
		{
			//1.	� �������� ������ �������� ������ ������ ������ ��������� �� ���� ��������. ����� ��� �������� ��������.
			char str[10];
			printf("������� ������: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);
			changeSymbol(str, k);
			printf("%s\n", str);
		}
		break;


		case 2:
		{
			//2.	� �������� ������ ��������� ���������� ������ ��������, �������� � ��� ������
			char str[10];
			printf("������� ������: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);
			int l = QuantityOfDifferentSymbols(str, k);
			printf("%d\n", l);
		}
		break;


		case 3:
		{
			//3.	� �������� ������ ����������� � �������� ������� ��� �����. ������������� ���� ��������� �������
			char str[10];
			printf("������� ������: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);
		}
		break;



		case 4:
		{
			//4.	� �������� ������ ��������� ���������� ����, ���������� ������ �������� ������� �����. ������������� ���� ��������� �������.
			char str[50];
			printf("������� ������: \n");
			fgets(str, 50, stdin);
			int k = strlen(str);
			int l = rus(str, k);
			printf("%d\n", l);
		}
		break;


		case 6:
		{
			//6.	��� ������ ��������. ����������, ������� ��������� �������� ����������� � ���. ������� �� �� �����
			char str[10];
			printf("������� ������: \n");
			fgets(str, 10, stdin);
			int k = strlen(str);
			dif(str, k);
		}
		break;


		case 7:
		{
			//7.	��� ������ ��������. ���������� ����� ������� ������������������ ������ ������ ���� �.
			char str[50];
			printf("������� ������: \n");
			fgets(str, 50, stdin);
			int k = strlen(str);
		}
		break;




		}

	} while (n > 0);

}