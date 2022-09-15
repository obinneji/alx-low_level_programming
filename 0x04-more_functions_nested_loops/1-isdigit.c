#include "main.h"
#include <ctype.h>

/**
* _isdigit - checks if a number is digit
* @c: The number to be checked
*
* Return: 1 if digit and 0 if otherwise
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
