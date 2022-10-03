#include <stdlib.h>
/**
* _strdup - copies a string to a new memory
* @str: string to be copied
* Return: a pointer
*/

char *_strdup(char *str)
{
	char *alloc_mem;
	unsigned int i;
	unsigned int string_length = 0;

	if (str == NULL)
		return ('\0');

	while (*(str + string_length) != '\0')
		string_length++;

	string_length++;

	alloc_mem = malloc(sizeof(*str) * string_length);

	if (alloc_mem == NULL)
		return ('\0');
	for (i = 0; i < string_length; i++)
		alloc_mem[i] = *(str + i);
	alloc_mem[i] = '\0';

	return (alloc_mem);
}

