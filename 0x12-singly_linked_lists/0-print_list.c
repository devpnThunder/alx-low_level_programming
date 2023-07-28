#include "lists.h"

/**
* print_list - function that prints all elements of a list_t list
* @h: constant pointer to a function
*
* Return: size of size_t
*/

size_t print_list(const list_t *h)
{
	size_t s;

	s = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		s++;
	}
	return (s);
}
