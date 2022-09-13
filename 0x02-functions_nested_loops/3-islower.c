#include "main.h"
#include <ctype.h>
/**
* _islower - checks for lower case of argument
* @c:Th value to be checked
* Description: The functions checks and return value base* on check the values
* Return: 1 if lower case 0 if upper case
*/

int _islower(int c)
{
	if  (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
