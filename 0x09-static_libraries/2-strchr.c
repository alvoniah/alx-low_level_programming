#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locate the char in the str
 * @s: str being searched
 * @c: character being looked for
 * Return: pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
		if (x == 0)
		{
			return (NULL);
		}
	}
}
