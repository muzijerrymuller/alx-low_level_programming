#include "hash_tables.h"

/**
 * key_index - Index to be gotten.
 * @key: Key where indec comes.
 * @size: Array size.
 * Return: Index key.
 * Description: Uses a djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
