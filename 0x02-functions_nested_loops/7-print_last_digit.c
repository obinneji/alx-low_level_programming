#include "main.h"
/*
* print_last_digit - prints last digit of a numbers
* @num: the required input
* Description: On function call it print last number 
* in the argurment
* Return: last digit
*/

int print_last_digit(int num)
{
	int last_digit;
	
	last_digit = num % 10;
	_putchar(last_digit);
	return (last_digit);
}
