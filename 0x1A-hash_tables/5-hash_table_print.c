#include "hash_tables.h"

/**
 * hash_table_print - print key/values of hash table
 * @hash_t: hash table
 */

void hash_table_print(const hash_table_t *hash_t)
{
	char *comma = "";
	hash_node_t *node;
	unsigned long int idx = 0;



	if (!hash_t || !hash_t->array)
		return;

	putchar('{');
	while (idx < hash_t->size)
	{
		node = ((hash_t->array)[idx]);
		while (node)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		idx++;
	}
	puts("}");
}
