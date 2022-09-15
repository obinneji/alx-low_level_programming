#include "main.h"

/**
* more_numbers - print 0-14 in 10 lines
*
* Return: 0-14 ten times if succefully
*/

void more_numbers(void)
{
	int i1;
	char i2, c;

	for (i1 = 0; i1 < 10; i1++)
	{
		for (i2 = 0; i2 <= 14; i2++)
		{
			c = i2;
			if (i2 > 9)
			{
				_putchar('1');
				c = i2 % 10;
			}

			_putchar('0' + c);
		}
	}

	_putchar('\n');
}
