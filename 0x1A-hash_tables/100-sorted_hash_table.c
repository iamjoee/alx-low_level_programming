#include "hash_tables.h"
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
/**
 * shash_table_get - Retrieve value associated with
 *                   key in sorted hash table
 * @ht: pointer to sorted hash table
 * @key: key to get value of
 * Return: If key cannot be matched - NULL
 *         Otherwise - value associated with key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}
/**
 * shash_table_create - Creates a sorted hash table
 * @size: size of new sorted hash table
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to new sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
unsigned long int j;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ht->array[j] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}
/**
 * shash_table_delete - Deletes sorted hash table
 * @ht: pointer to the sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
/**
 * shash_table_set - Adds element to a sorted hash table
 * @ht: pointer to sorted hassh table
 * @key: key to add - cannot be an empty string
 * @value: value associated with key
 *
 * Return: Upon failure - 0
 *         Otherwise - 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
}
