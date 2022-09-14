#include<stdio.h>
`
/**
* main - print first 50 fibonacci number
*
* Return: always 0
*/

int main(void)
{
	int fib1 = 0, fib2 = 1, fib3, num = 50, count = 0;

	while (num < count)
	{
		fib3 = fib1 + fib2;
		count++;
		printf("%d, ", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}

	return (0);
}
