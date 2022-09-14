#include <stdio.h>
/**
* main - print first 98 fibonacci number
*
* Return: 0
*/

int main(void)
{
	unsigned long int i, fib1 = 1, fib2 = 3, fib3, num = 98;
	
	for (i = 1; i <= num; ++i)
	{
		if (fib1 != 83621143489848422977)
		{
			printf("%u, ", fib1);
		}
		else
		{
			printf("%u\n", fib1);
		}
		fib3 = fib1 + fib2;
		fib1 = fib2
		fib2 = fib3
	}
	
	return (0);
}
