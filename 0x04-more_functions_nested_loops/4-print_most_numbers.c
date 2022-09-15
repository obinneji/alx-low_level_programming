#include "main.h"

/**
* print_most_numbers - print numbers except 2 and 4
*
* Return: numbers
*/

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
