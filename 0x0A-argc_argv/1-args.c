#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argc: size of argv
 * @argv: array of str
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);

	return (0);
}
