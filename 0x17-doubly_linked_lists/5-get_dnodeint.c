#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth nod of a linked list.
 * @head: pointer to first node
 * @index: node index
 * 
 * Return: returns the nth node of a linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;
	dlistint_t *temp = NULL;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (c = 0; temp != NULL; c++)
	{
		if (index == 0)
			return (temp);
		temp = temp->next;
		if (c == (index - 1) && index != 0)
		{
			return (temp);
		}
	}
	return (NULL);
}
