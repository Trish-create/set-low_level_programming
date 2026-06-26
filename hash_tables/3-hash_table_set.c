#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add or update (cannot be an empty string).
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
		unsigned long int index;
			hash_node_t *new_node, *temp;
				char *value_copy;

					if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
								return (0);

						value_copy = strdup(value);
							if (value_copy == NULL)
										return (0);

					
								index = key_index((const unsigned char *)key, ht->size);

								
									temp = ht->array[index];
										while (temp != NULL)
												{
															if (strcmp(temp->key, key) == 0)
																		{
																						free(temp->value);
																									temp->value = value_copy;
																												return (1);
																														}
																	temp = temp->next;
																		}

											/* Key doesn't exist, create a new node */
											new_node = malloc(sizeof(hash_node_t));
												if (new_node == NULL)
														{
																	free(value_copy);
																			return (0);
																				}

													new_node->key = strdup(key);
														if (new_node->key == NULL)
																{
																			free(new_node);
																					free(value_copy);
																							return (0);
																								}

															new_node->value = value_copy;

																/* Collision handling: Add the new node at the beginning of the list */
																new_node->next = ht->array[index];
																	ht->array[index] = new_node;

																		return (1);
}

