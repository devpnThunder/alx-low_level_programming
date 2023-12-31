#include "lists.h"

/**
* _strlen - finds the length of a string
* @str: string to find th length of
*
* Return: length of a string
*/

unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
* add_node - function that adds a new node at the beginning of a list
* @head: double pointer to a linked list
* @str: string to add to the list
*
* Return: pointer to the new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
