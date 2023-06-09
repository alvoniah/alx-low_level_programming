#include "main.h"
/**
 * _strlen - returns the length of the str
 * @s: pointer to the str
 * Return: length of the str
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
