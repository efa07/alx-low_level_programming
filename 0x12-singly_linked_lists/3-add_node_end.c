#include "lists.h"

/**
 * add_node_end - adds new node.
 * @head: head of the linked list.
 * @str: string to store.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = strlen(str);
	list_t *new = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);
	new->str = malloc((len + 1) * sizeof(char));
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	memcpy(new->str, str, len + 1);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
