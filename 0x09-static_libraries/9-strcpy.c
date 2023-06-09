#include "main.h"
/**
 * _strcpy - copy string at end of another str
 * @dest: pointer to the str
 * @src: pointer to str
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
