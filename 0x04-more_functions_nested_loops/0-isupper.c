#include "main.h"
#include <ctype.h>

/**
* _isupper - checks if alphabet is upper or lower
* @c: the aphabet to check
*
* Return: 1 for uppercase and 0 for lower case
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
