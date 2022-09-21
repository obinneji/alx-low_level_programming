#include "main.h"
#include <stdio.h>
/**
* leet -> a leet function
* @x: parameter x
* Return: a number
*/

char *leet(char *c)
{
	int i, j;

	char a[] = "o0ILeEaAtT";
	char n[] = "0011334477";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = n[j];
			}
		}
	}
	return (c);
}
