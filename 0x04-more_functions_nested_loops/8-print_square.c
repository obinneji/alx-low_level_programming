#include "main.h"

/**
* print_square - prints a sqaure
* @size: the number of sqares
* Return: void
*/

void print_square(int size)
{
	int i = 0, ii;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (ii = 0; ii < (size - 1); ii++)
			{
				_putchar('#');
			}

			_putchar('#');
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
