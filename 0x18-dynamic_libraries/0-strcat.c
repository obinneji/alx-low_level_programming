#include "main.h"
#include <string.h>
/**
* _strcat - This is a function that concaternate
* @dest: first parameter
* @src: secord parameter
* Return: a concanated string
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
