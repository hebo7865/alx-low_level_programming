#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * add_node -  adds a new node at the beginning of a list_t list
  * @head: pointer to list_t list
  * @str: string to be duplicated
  * Return: always 0
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}

	new = malloc(sizeof(list_t));

	if (!head || !new)
	{
		return (NULL);
	}
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = i;
	}
	new->next = *head;
	*head = new;
	return (new);
}
