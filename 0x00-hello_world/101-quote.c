#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 1 after printing  the function
 */
int main(void)
{
	write(2, "and that peice of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
