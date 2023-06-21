#include "function_pointers.h"
/**
 * print_name - prints the name
 * @name: input name
 * @f: pointer function
 * Return: nothing to return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
