#include "main.h"
/**
 * _puts - prints str followed by newline
 * @str: pointer to str
 * Return: return nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
