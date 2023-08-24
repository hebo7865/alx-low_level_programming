#include <stdio.h>
#include "lists.h"
/**
  * print_list - prints all the elements of a list_t list
  * @h: pointer to list_t  list
  * Return: always 0
  */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
