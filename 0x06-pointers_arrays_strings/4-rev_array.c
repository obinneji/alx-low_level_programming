#include "main.h"
#include <stdlib.h>
/**
* reverse_array - reverse content in an arrray
* @a: first parameter
* @n: numbers of element in array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
