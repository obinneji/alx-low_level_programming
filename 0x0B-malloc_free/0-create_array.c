#include <stdlib.h>
/**
* create_array - create an array  and initaialize it with a specific
* char @c
* @size: size of the char to be created
* @c: char value to initilaize the array with
* Return: pointer to the array created
*/


char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return ('\0');

	arr = malloc(size);

	if (arr == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		arr[i] = c;

	arr[size] = '\0';

	return (arr);
}
