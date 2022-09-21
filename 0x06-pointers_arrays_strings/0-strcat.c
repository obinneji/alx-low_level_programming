#include "main.h"

/**
* _strcat - This is a function that concaternate
* @dest: first parameter
* @src: secord parameter
* Return: a concanated string
*/

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[0] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
