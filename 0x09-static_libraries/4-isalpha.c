#include "main.h"
#include <stdio.h>
/**
 * _isaplha - determines if input is the letter
 * @c: ASCII code character
 * Return: 1 otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
