#include "main.h"
/**
 * square_root - computes the natural sqr root of the number
 * @i: the input number
 * @j: the iterator
 * Return: return square root otherwise -1
 */
int square_root(int i, int j)
{
	if ((j * j) == i)
		return (j);
	if (j == i / 2)
		return (-1);
	return (square_root(i, j + 1));
}
/**
 * _sqrt_recursion - computes natural srt of number
 * @n: the input number
 * Return: return natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (square_root(n, 0));
}
