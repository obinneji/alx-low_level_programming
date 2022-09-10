#include<stdio.h>
#include<time.h>
/**
 * main - entry point
 *
 * Return: 0 if succcessful
 */
int main(void)
{
	int n;
	strand(time(0));
	n = rand() - RAND_MAX / 2
	if(n > 0)
	{
		printf("if the number is greater than 0: is positive\n")
	} else if (n == 0)	
	{
		printf("if the number is zero: is zero\n")
	} else 
	{
		printf("if the number is less than 0: is negative\n")
	}
	return (0);
}
