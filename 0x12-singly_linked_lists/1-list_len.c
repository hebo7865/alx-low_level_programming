#include <stdlib.h>
#include "lists.h"
/**
  * list_len - the number of elements in a linked list_t list
  * @h: pointer to list_t list
  * Return: always 0
  */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
