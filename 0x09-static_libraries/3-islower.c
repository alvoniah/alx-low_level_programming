#include "main.h"
#include <stdio.h>
/**
 * _islower - checks for lowercase
 * @c: ASCII code char
 * Return: 1 otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
