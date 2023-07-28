#include "lists.h"

/**
* list_len - function that returns the number of elements in a linked list
* @h: header of the list
*
* Return: the number of elements
*/

size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
