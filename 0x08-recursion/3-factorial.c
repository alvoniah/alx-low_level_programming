#include "main.h"
/**
 * factorial - computes the factorial of number
 * @n: the number
 * Return: return factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
