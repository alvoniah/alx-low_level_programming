#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates multple args
 * @ac: arg count
 * @av: pointer to array av
 * Return: pointer to the new str
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, len = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
	}
	len += ac;

	string = malloc(sizeof(char) * len + 1);
	if (string == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			string[c] = av[a][b];
			c++;
		}
		if (string[c] == '\0')
		{
			string[c++] = '\n';
		}
	}
	return (string);
}
