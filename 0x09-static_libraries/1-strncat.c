#include "main.h"
#include <string.h>

/**
* _strncat - concaternate strings
* @dest: first parameter
* @src: secord parameter
* @n: third parameter
* Return: the string
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
