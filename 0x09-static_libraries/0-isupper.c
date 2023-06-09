#include "main.h"
/**
 * _isupper - checking upper letters
 * @c: letter from alphabet
 * Return: 1 otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
