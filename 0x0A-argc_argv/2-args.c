#include "main.h"
#include <stdio.h>
/**
 * main - main prints
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
