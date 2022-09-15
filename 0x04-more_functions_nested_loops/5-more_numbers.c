#include "main.h"

/**
* more_numbers - print 0-14 in 10 lines
*
* Return: 0-14 ten times if succefully
*/

void more_numbers(void)
{
	int i1, i2;

	for (i1 = 0; i1 <= 9; i1++)
	{
		for (i2 = 0 ; i2 <= 14; i2++)
		{
			_putchar(i2);
		}
		_putchar('\n');
	}

	_putchar('\n');
}
