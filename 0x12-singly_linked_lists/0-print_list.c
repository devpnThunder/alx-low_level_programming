#include "lists.h"

/**
* print_list - print all elements of `list_t` list
* @h: head of linked list
*
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t s;

	while (h)
	{
		if (h-str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		h = h->next;
		s++;
	}
	return (s);
}
}
