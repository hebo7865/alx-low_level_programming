#include <stdio.h>
#include "lists.h"
/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  * @head: pointer to listint_t list
  * @index:  is the index of the node
  * Return: always 0
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
	{
		return (NULL);
	}
	else
	{
		return (temp);
	}
}
