#include <stdio.h>
#include "lists.h"
/**
  * listint_len - returns the number of elements
  * in a linked listint_t list
  * @h: pointer to listint_len list
  * Return: always 0
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
