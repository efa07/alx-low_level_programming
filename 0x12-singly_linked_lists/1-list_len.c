#include "lists.h"

/**
 * list_len - return num of elemnts in linked list.
 * @h: linked list.
 * Return: num of elemnts in list.
 */

size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + list_len(h->next));
}
