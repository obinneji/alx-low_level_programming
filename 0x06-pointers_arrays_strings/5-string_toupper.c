#include "main.h"
/**
* string_toupper - convert to uppercase
* @x: string parameter
* Return: a string
*/

char *string_toupper(int *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
