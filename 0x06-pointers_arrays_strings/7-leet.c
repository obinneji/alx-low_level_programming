#include "main.h"
/**
* leet -> a leet function
* @c: parameter c
* Return: a number
*/

char *leet(char *c)
{
	int i, j;

	char a[] = "oOlLeEaAtT";
	char n[] = "0011334477";

	for (i = 0; *(c + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(c + i)
			{
				*(c + i) = n[j];
			}
		}
	}
	return (c);
}
