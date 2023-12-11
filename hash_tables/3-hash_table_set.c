#include "hash_tables.h"
/**
 * hash_table_set - Adds element to the hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key, cannot be an empty string.
 * @value: The value associated with the key, must be duplicated, can be
 * an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (update_value(ht, key, value, index))
	return (1);

	new_node = create_new_node(key, value);
	if (new_node == NULL)
	return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
 * create_new_node - Creates a new hash table node.
 * @key: The key for the new node.
 * @value: The value for the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
	free(new_node->key);
	free(new_node->value);
	free(new_node);
	return (NULL);
	}
	return (new_node);
}

/**
 * update_value - Updates the value of an existing key.
 * @ht: The hash table.
 * @key: The key update.
 * @value: The new value.
 * @index: The index in the hash table.
 *
 * Return: 1 if updated, 0 otherwise.
 */
int update_value(hash_table_t *ht, const char *key,
								const char *value, unsigned long int index)
{
	hash_node_t *node;

	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
	}
	return (0);
}
