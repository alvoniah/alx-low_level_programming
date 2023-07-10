#include "main.h"
/**
 * create_file - creates the file
 * @filename: filename
 * @text_content: content written in the file
 * Return: 1 otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(i, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(i);

	return (1);
}
