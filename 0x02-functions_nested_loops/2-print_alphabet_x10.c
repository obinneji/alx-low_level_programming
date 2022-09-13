#include "main.h"

/**
* print_alphabet_x10 - print all alphabet in lower case
* Description: prints the result 10 times.
*/

void  print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
	}
}
