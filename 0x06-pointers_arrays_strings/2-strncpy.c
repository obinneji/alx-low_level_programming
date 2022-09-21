#include "main.h"
#include <string.h>

/**
* _strncpy - copys a string
* @dest: parameter one
* @src: parameter two
* @n: third parameter
* Return: a copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
