#include "main.h"
/**
 * read_textfile - reads the file and prints it
 * @filename: filename
 * @letters: no of the letters
 * Return: no of the printed letters, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(i, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(i);

	free(buf);

	return (nwr);
}
