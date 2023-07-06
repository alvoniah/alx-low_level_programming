#include "main.h"
/**
 * set_bit - sets the value to 1
 * @n: pointer of an unsigned long int
 * @index: idx of the bit
 * Return: 1 othewise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
