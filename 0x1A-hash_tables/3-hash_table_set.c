#include "hash_tables.h"

/**
 * make_hash_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 *
 * Return: the new node, or NULL on failure
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
    hash_node_t *node;
    //Allocates memory for a node
    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (NULL);
    node->key = strdup(key);
    if (node->key == NULL)
    {
        free(node);
        return (NULL);
    }
    node->value = strdup(value);
    if (node->value == NULL)
    {
        free(node);
        free(node->key);
        return (NULL);
    }
    node->next = NULL;
    return (node);
}

/**
 * hash_table_set - sets a key to a value in the hash table
 * @ht: hash table to add elemt to
 * @key: key for the data
 * @value: data to store
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)