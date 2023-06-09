#include "main.h"
/**
 * _strncpy - copies the str
 * @dest: pointer to buffer storing the str
 * @src: pointer to str to be copied
 * @n: max no of bytes being copied
 * Return: pointer to resulting str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x, length_src;

	x = 0;
	length_src = 0;
	while (src[x++])
		length_src++;

	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];

	for (x = length_src; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
