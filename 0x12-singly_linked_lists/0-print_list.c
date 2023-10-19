#include "lists.h"

/**
 * print_list - prints all the elemnts of lits_t.
 * @h: linked list.
 * Return: number or node.
 */

size_t print_list(const list_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}
	return (c);
}
