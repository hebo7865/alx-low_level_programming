#include "hash_tables.h"
/**
 * create_hash_node - create new node 
 * @key: the key for node
 * @value: the value for key
 * Return: new node or NULL if fail
*/
ht_item_t *create_hash_node(const char *key, const char *value)
{
    ht_item_t *node;

    node = malloc(sizeof(ht_item_t));
    if (node == NULL)
    {
        return (NULL);
    }
    node->key = strdup(key);
    if (node->key == NULL)
    {
        free(node);
        return (NULL);
    }
    node->value = strdup(value);
    if (node->value == NULL)
    {
        free(node->key);
        free(node);
        return (NULL);
    }
    node->next = NULL;
    return (node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table you want to add or update
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key
 * Returns: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int i;
    ht_item_t *node, *tmp;
	char *newValue;

	if (ht == NULL || ht->array == NULL || ht->size == 0
	    || key == NULL || strlen(key) == 0 || value == NULL)
		{
			return (0);
		}
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			newValue = strdup(value);
			if (newValue == NULL)
			{
				return (0);
			}
			free(tmp->value);
			tmp->value = newValue;
			return (1);
		}
		tmp = tmp->next;
	}
	node = create_hash_node(key, value);
	if (node == NULL)
	{
		return (0);
	}
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
