#include "main.h"
/**
 * _strspn - gets length of the prefix sub
 * @s: string being evaluated
 * @accept: str containing results of evaluation
 * Return: number of bytes in initial seg
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z, flag;

	z = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		flag = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (z);
		}
	}
	return (0);
}
