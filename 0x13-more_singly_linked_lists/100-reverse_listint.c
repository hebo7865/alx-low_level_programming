#include <stdio.h>
#include "lists.h"
/**
  * reverse_listint - reverses a listint_t linked list
  * @head: pointer to listint_t list
  * Return: always 0
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *next = NULL;

	if (!head || !*head)
	{
		return (NULL);
	}

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = next;
	}
	*head = rev;
	return (*head);
}
