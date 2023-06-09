#include "main.h"
/**
 * _strncat - concatenates two str
 * @dest: pointer to destination str
 * @src: pointer to first
 * @n: numbers of bytes being concatenated
 * Return: pointer to resulting str
 */
char *_strncat(char *dest, char *src, int n)
{
	int span, x;

	span = 0;
	while (dest[span] != '\0')
	{
		span++;
	}
	for (x = 0; x < n && src[x] != '\0'; x++, span++)
	{
		dest[span] = src[x];
	}
	dest[span] = '\0';
	return (dest);
}
