#include "main.h"
#include<stdio.h>

/**
* main - print largest of 3 numbers
* Return: 0
*/

int main(void)
{
	int a, b, c, largest;
	
	a = 972;
	b = -98;
	c = 0;
	
	largest_number(a, b, c);
	
	printf("%d is the largest number\n", largest);

	return (0);
}
