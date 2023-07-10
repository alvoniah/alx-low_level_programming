#include "main.h"
/**
 * append_text_to_file - appends text end of the file
 * @filename: filename
 * @text_content: added content
 * Return: 1 otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = (i, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(i);

	return (1);
}
