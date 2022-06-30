#include "main.h"
/**
 * malloc_checked - Allocates a block of memory using malloc
 * @b: Parameter
 * Return: 98 or pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	char *str;
	str = malloc(sizeof(b) *b);
	if (str == NULL)
		exit(98);
	return (str);
}
