#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct ht_item - items of hash table
 * @key: key item in hash table
 * @value: the value of the key item
 * @next: pointer to the next node
*/

typedef struct ht_item
{
	char *key;
	char *value;
	struct  ht_item *next;
} ht_item_t;

/**
 * struct hash_table - hash table sturucture
 * @size: size of array
 * @array: the data stored in array in size of @size
*/

typedef struct hash_table
{
	unsigned long int size;
	ht_item_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);


#endif
