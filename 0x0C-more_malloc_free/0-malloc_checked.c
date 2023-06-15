#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: number of bytes allocated
 * Return: return the pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
