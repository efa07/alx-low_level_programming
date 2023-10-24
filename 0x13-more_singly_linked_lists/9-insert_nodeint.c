#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if fail.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		*head = new_node;
		new_node->n = n;
		new_node->next = *head;

		if (new_node == NULL)
			return (NULL);
		return (new_node);
	}

	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
