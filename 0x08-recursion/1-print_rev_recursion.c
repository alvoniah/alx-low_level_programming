#include "main.h"
/**
 * _print_rev_recursion - prints the string in reverse
 * @s: input string pointer
 * Return: Nothing to return
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
