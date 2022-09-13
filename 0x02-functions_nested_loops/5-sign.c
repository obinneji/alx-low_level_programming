#include "main.h"
/**
* print_sign - print sign of a number
* @n: the number that is he argument
* Description: print + for numbers above 0
* 0 for number equal to zero and
* -1 for numbers less than zero
* Return: 1, 0 or -1 depending on the number
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar("+");
		return (1);
	}
	else if (n == 0)
	{
		_putchar("0");
		return (0);
	}
	else
	{
		_putchar("-1");
		return (-1);
	}
}

