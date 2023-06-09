#include "main.h"
/**
 * *_memset - fills memory with the constant byte
 * @s: memory space filled
 * @b: character being copied
 * @n: number of times b will be copied
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
