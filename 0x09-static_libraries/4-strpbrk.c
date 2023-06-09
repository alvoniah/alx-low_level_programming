#include "main.h"
/**
 * *_strpbrk - searches the string
 * @s: first str
 * @accept: second str
 * Return: pointer to the byte s if the match is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
				return (s + x);
		}
	}
	return ('\0');
}
