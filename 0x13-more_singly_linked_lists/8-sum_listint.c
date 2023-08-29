#include <stdio.h>
#include "lists.h"
/**
  * sum_listint - returns the sum of all the data (n)
  * of a listint_t linked list
  * @head: pointer of listint_t list
  * Return: always 0
  */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
