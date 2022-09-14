#include<stdio.h>
#include "main.h"
/**
* main - print first 50 fibonacci number
*
* Return: always 0
*/

int main(void)
{
	long int fib1 = 1, fib2 = 2, fib3, num = 50, i;

	for (i = 1; i  <= num; ++i)
	{
		if (fib1 != 20365011074)
		{
			printf("%ld, ", fib1);
		}
		else
		{
			printf("%ld\n", fib1);
		}

		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}

	return (0);
}
