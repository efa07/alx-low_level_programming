#include "lists.h"

/**
 * add_nodeint - add a new node to beginning of listint_t list.
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newno;

	newno = malloc(sizeof(listint_t));

	if (newno == NULL)
		return (NULL);

	newno->n = n;
	newno->next = *head;
	*head = newno;

	return (*head);
}
