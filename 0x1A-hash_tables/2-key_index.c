#include "hash_tables.h"
/**
 * key_index - Gets the index at which a pair should
 *             be stored in array
 * @key: key to get index
 * @size: size of array
 * Return: index of the key
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
