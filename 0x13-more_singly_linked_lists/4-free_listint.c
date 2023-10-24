#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
