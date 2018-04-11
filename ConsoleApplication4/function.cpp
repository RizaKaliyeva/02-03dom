#include <math.h>
#include <time.h>
#include <stdint.h>
#include <string.h>
#include <iostream>

using namespace std;


void changeSymbol(char *a, int length)
{
	for (int i = 0; i < length; i++)
	{
		int code = (int)a[i];
		a[i] = (char)(code + 1);
	}
}

int QuantityOfDifferentSymbols(char*a, int length)
{
	int count = 0, count1 = 0;

	for (int i = 0; i < length - 1; i++)
	{
		count = 0;
		for (int j = i + 1;j < length;j++)
		{
			if (a[i] == a[j])
				count++;
		}
		if (count == 0)
			count1++;
	}
	return count1;
}



void dif(char*a, int length)
{
	int count = 0, count1 = 0;
	char b[10];
	for (int i = 0; i < length - 1; i++)
	{
		count = 0;
		for (int j = i + 1;j < length;j++)
		{
			if (a[i] == a[j])
				count++;
		}
		if (count == 0)
		{
    		count1++;
			b[i] = a[i];
		}
	}
	printf("%d\n", count1);
	printf("%s\n", b);

}



int rus(char*a, int length)
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (i == 0)
		{
			int code = (int)a[i];
			if (code >= -32 && code <= -1)
			{
				count++;
			}
		}
		if (a[i] == ' ')
		{
	    	int code = (int)a[i + 1];
			if (code >= -32 && code <= -1)
			{
				count++;
			}
		}
	}
	return count;
}

void skobki(char *a, int length)
{
	int start, end;
	for (int i = 0; i < length; i++)
	{
		if (a[i] == '(')
			start = i;
		if (a[i] == ')')
			end = i;
	}
	for (int i = start + 1;i < end;i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");
}

