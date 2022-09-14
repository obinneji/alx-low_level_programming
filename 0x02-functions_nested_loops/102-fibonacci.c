#include<stdio.h>
/**
* main - print first 50 fibonacci number
*
* Return: always 0
*/

int main(void)
{
	long int fib1 = 0, fib2 = 1, fib3, num = 50, count = 0;

	while (count <= num)
	{
		if (fib1 != 20365011074)
		{
			printf("%ld, ", fib1);
		}
		else
		{
			printf("%ld, " , fib1);
		}

		fib3 = fib1 + fib2;
		count++;
		fib1 = fib2;
		fib2 = fib3;
	}

	return (0);
}
