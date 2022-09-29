#include "main.h"
/**
* _pow_recursion - returns the value of x raise to power of y
* @x: an interger
* @y: an interger ---> power of  @x
* Return: values of @x raised to power of @y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
