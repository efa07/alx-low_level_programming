#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @hash_t: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *hash_t)
{
    unsigned long int i;
	hash_table_t *head = hash_t;
	hash_node_t *node, *tmp;

	for (i = 0; i < hash_t->size; i++)
	{
		if (hash_t->array[i] != NULL)
		{
			node = hash_t->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
