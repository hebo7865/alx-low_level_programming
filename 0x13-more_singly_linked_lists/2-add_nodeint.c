#include <stdio.h>
#include "lists.h"
/**
  * add_nodeint - adds a new node at the beginning of a listint_t list
  * @head: pointer to listint_t list
  * @n: number to be add
  * Return: always 0
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	if (*head)
	{
		new->next = *head;
	}
	*head = new;
	return (new);
}
