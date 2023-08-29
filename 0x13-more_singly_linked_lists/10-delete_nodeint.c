#include <stdio.h>
#include "lists.h"
/**
  * delete_nodeint_at_index - deletes the node at index
  * index of a listint_t linked list
  * @head: pointer to listint_t list
  * @index: index of the node that should be deleted
  * Return: always 0
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *curr = NULL;
	unsigned int i = 0;

	if (!head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
		{
			return (-1);
		}
		temp = temp->next;
		i++;
	}
	curr = temp->next;
	temp->next = curr->next;
	free(curr);
	return (1);
}
