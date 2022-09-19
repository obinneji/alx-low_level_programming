#include "main.h"

/**
* swap_int - swap two numbers
* @a: first number
* @b: secord number
* Return: always return thr swap value
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
