#include "hash_tables.h"
#include<stdio.h>
/**
 *  * hash_table_print - Prints a hash table.
 *   * @ht: A pointer to the hash table to print.
 *    *
 *     * Description: Prints the key/value pairs in the order they appear
 *      * in the array of the hash table. Format: {'key': 'value', 'key': 'value'}
 *       */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
		for (i = 0; i < ht->size; i++)

		{
			node =ht ->array[i];
			while (node != NULL)
			{
				if(first_pair==0)
					printf(", ");
				printf(" '%s': '%s'", node->key, node->value);
				first_pair =0;
					node = node->next; 
			}
		} 
		printf("}\n");

				}
