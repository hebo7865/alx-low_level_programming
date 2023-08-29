#include <stdio.h>
#include "lists.h"
/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: pointer to listint_t list
  * Return: always 0
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
	{
		return (0);
	}
	temp = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = temp;
	return (i);
}
