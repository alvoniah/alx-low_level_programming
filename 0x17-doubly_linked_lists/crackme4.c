#include <stdio.h>
#include <string.h>
/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	char pwd[100];
	char ok[100] = "Zen of Python";

	printf("Password: ");
	scanf("%s", pwd);

	strcat(ok, " C ");
	char temp[100];

	strcpy(temp, ok + 1);
	temp[2] = ok[3];
	temp[3] = ok[14];
	temp[4] = ok[3];
	strncpy(temp + 5, ok + 7, 2);
	strncpy(temp + 7, ok, 6);
	temp[13] = '\0';

	printf("%s\n", temp);

	if (strcmp(pwd, temp) == 0)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}
	return (0);
}
