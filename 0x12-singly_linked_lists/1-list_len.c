#include "list.h"
/**
* list_len - return the number of elemrnt in a list
* @h: singly linkked list
* Return: number of elemrnt in the list
*/

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
