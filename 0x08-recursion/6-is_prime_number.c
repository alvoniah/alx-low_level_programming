#include "main.h"
/**
 * divisibility - checks for divisibility of the number
 * @n: the number to be checked
 * @dv: divisor
 * Return: 0 otherwise -1
 */
int divisibility(int n, int dv)
{
	if (n % dv == 0)
		return (0);
	if (dv == n / 2)
		return (1);
	return (divisibility(n, dv + 1));
}
/**
 * is_prime_number - determines if number is prime
 * @n: the input number
 * Return: 1 otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (divisibility(n, 2));
}
