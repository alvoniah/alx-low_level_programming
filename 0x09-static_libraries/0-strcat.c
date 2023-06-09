#include "main.h"
/**
 * _strcat - concatenates two strs
 * @dest: pointer to destination str
 * @src: pointer to first strs
 * Return: pointer to resulting str
 */
char *_strcat(char *dest, char *src)
{
	int span, x;

	span = 0;
	while (dest[span] != '\0')
	{
		span++;
	}
	for (x = 0; src[x] != '\0'; x++, span++)
	{
		dest[span] = src[x];
	}
	dest[span] = '\0';
	return (dest);
}
