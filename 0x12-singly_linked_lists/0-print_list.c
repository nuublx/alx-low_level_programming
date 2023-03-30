#include "lists.h"

/**
 * print_list - prints a list_t list
 * @h: list to print
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		if (h->str != NULL)
			printf("[%d] %s\n",h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (i);
}
