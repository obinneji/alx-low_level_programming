#include "main.h"
/**
* reverse_array - reverse content in an arrray
* @a: first parameter
* @n: numbers of element in array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int *s, c, d;

	s = (int *)malloc(sizeof(int) * n);

	if (s == NULL)
		exit(EXIT_FAILURE);

	for (c = n - 1, d = 0; c >= 0; c--, d++)
		*(s + d) = *(a + c);

	for (c = 0; c < n; c++)
		*(a + c) = *(s + c);

	free(s);
}
