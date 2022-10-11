#include <stdlib.h>
#include "main.h"

/**
* _calloc -  a function that allocates memory for an array, using malloc.
* @nmemb: an array of elements
* @size: element size in bytes
* Return: Pointer | NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int count = 0;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
while (count < nmemb * size)
{
ptr[count] = 0;
count++;
}
return (ptr);
}
