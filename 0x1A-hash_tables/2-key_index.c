#include "hash_tables.h"

/**
 * key_index - gives the index of key
 * @key: key input
 * @size: size input
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
