#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends a text to a file.
 * @filename: the name of the file where the file should be appended
 * @text_content: text to be appended.
 *
 * Return: I on sucess and -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl, len, wr;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl < 0)
		return (-1);
	len = 0;
	while (text_content[len])
		len++;
	wr = write(fl, text_content, len);
	if (wr < 0)
		return (-1);
	close(fl);
	return (1);
}
