#include "main.h"
#include <string.h>
/**
* _strcat - function that concaternate two strings
* @dest: first strings/word
* @src: secord strings/word
* Return: concaternated character
*/

char *_strcat(char *dest, char *src)
{
	int i;

	int j = strlen(src);

	for (i = 0; src[i] != '\0'; i++)
		dest[i + j] = src[i];
	dest[i + j] = '\0';
}

