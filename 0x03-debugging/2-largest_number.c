#include "main.h"

/**
* largest_number -return largest number of 3 numbers
* @a: first interger
* @b: secord interger
* @c: third interger
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b >= c)
	{
		largest = a;
	}

	else if (b >= a && b >= c)
	{
		largest = b;
	}

	else
	{
		largest = c;
	}

	return (largest);
}
