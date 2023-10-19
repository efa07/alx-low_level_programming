#include "lists.h"

/**
 * add_node - add new nodes.
 * @head: 1st node of linked list
 * @str: string to store
 * Return: address of head.
 */

list_t *add_node(list_t **head, const char *str)
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
	new->next = *head;
	*head = new;

	return (*head);
}
