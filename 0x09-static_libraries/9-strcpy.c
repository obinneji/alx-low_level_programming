#include "main.h"
/**
* _strcpy - copies the string pointed by src
* @desr: a pointer to char that will be change
* @src: a pointer to char that will be change
* Return: desr
*/

char *_strcpy(char *desr, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		desr[i] = src[i];
		i++;
	}

	desr[i] = '\0';

	return (desr);
}
