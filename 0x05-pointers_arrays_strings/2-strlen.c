#include "main.h"
/**
* _strlen - print the length of a string
* @s: the string parameter
* Return: the length as interger
*/

int _strlen(char *s)
{
	int t;

	for (t = 0; s[t] != '\0'; ++t)
		;
	return (t);
}
