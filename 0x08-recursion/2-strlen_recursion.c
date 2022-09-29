#include "main.h"

/**
* _strlen_recursion - return the lenght of a sstring
* @s: thr string whose length ius going to be returned
* Return: an interger of @s
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
