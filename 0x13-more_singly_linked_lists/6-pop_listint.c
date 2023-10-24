#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);
	int data = (*head)->n;
	listint_t *temp = *head;

	*head = (*head)->next;
	free(temp);

	return (data);
}
