#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		node = ht->array[i];
		if (node)
		{
			while (node->next)
			{
				free(node->value);
				free(node->key);
				free(node);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
