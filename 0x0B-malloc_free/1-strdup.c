#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - return the pointer to the newly
 * @str: pointer to duplicated str
 * Return: pointer to duplicated str or NULL
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int len;
	unsigned int x;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
		return (NULL);

	for (x = 0; x < len; x++)
	{
		string[x] = str[x];
	}
	string[len] = '\0';
	return (string);
}
