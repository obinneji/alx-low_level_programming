#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* struct list_s - sinngly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: point to the next node
* Description: All prototypes used in the singly linked directory
* are contained here and is part neccesities
* for a successful compliation
*/

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
