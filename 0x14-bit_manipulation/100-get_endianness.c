#include "main.h"
/**
 * get_endianness - check the endianness
 * Return: 0 othewise 1
 */
int get_endianness(void)
{
	unsigned int j;
	char *c;

	j = 1;
	c = (char *) &j;

	return ((int)*c);
}
