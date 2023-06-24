#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes the function given the para
 * @array: input integer array
 * @size: the size of the array
 * @action: pointer to the function
 * Return: nothing to return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
