#include<stdio.h>
/**
* main - print the sum of even numbers in a fibonnacci sequece
*
* Return: 0
*/

int main(void)
{
	int i;
	unsigned long int fib1 = 1, fib2 = 2, fib3, sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (fib1 < 4000000 && (fib1 % 2) == 0)
		{
			sum = sum + fib1;
		}
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}

	printf("%lu\n", sum);

	return (0);
}
