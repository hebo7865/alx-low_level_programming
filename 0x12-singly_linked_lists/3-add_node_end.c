#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: pointer to list_t list
  * @str: string to be dublicated
  * Return: always 0
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}

	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}
	
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	{
		temp = temp->next;
		temp->next = new;
	}
	return (new);
}
