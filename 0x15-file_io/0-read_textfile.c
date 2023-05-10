#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - Prints the text in a text file to the standard output
 * @filename: The name of the file containing the text.
 * @letters: the number of letters to be printed.
 *
 * Return: actual number of letters read, 0 if end of file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl, len, wr;
	char *buff;

	if (!filename || !letters)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (buff == 0)
		return (0);

	fl = open(filename, O_RDONLY);
	if (fl == -1)
	{
		free(buff);
		return (0);
	}
	len = read(fl, buff, letters);
	if (len == -1)
	{
		free(buff);
		close(fl);
		return (0);
	}
	wr = write(STDOUT_FILENO, buff, len);

	free(buff);
	close(fl);
	if (wr != len)
		return (0);
	return (len);
}
