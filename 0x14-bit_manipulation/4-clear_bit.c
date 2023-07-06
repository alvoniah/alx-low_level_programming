#include "main.h"
/**
 * clear_bit - sets the value of the bit 0
 * @n: pointer of the an unsigned long int
 * @index: idx of the bit
 * Return: 1 otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
