#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a new file
 * @filename: the nema of the file to be created
 * @text_content: The content to be added.
 *
 * Return: Always 1 on succes, on error -1.
 */
int create_file(const char *filename, char *text_content)
{
	int len, fl, wr;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fl < 0)
		return (-1);
	len = 0;
	wr = 0;
	while (text_content && text_content[len])
		len++;
	wr = write(fl, text_content, len);
	if (wr < 0)
		return (-1);
	close(fl);
	return (0);
}
