#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFSIZE 1024
/**
 * rd_file - reacs a file to the memory buffer
 * @fl: the file to be read
 * @bf: pointer toa pointer to the buffer
 * @fd: the file descriptions
 * Return: the length
 */
static ssize_t rd_file(char *fl, char **bf, int fd)
{
	int len;

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fl);
		exit(98);
	}
	if (!(*bf))
		*bf = malloc(sizeof(char) * BUFSIZE);
	len = read(fd, *bf, BUFSIZE);
	if (len < 0)
	{
		free(*bf);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fl);
		exit(98);
	}
	return (len);
}

/**
 * wr_cp - copies the buffer to the a file
 * @fl: destination file
 * @fd: file description
 * @bf: pointer to the buffer
 * @len: the size of the buffer
 *
 * Return: Nothing
 */
static void wr_cp(char *fl, int fd, char *bf, int len)
{
	if (fd < 0 || !bf)
	{
		free(bf);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fl);
		exit(99);
	}
	if (write(fd, bf, len) < 0)
	{
		free(bf);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fl);
		exit(99);
	}
}
/**
 * main - the start of program exceution.
 * @ac: the arg count
 * @av: arg values
 *
 * Return: 0 success
 */
int main(int ac, char *av[])
{
	int fd_1, fd_2, len, err;
	char *bf, *fl_fr, *fl_to;

	bf = NULL;
	len = 1;
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fl_fr = av[1];
	fl_to = av[2];
	fd_1 = open(fl_fr, O_RDONLY);
	fd_2 = open(fl_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (len > 0)
	{
		len = rd_file(fl_fr, &bf, fd_1);
		if (!len)
		{
			break;
		}
		wr_cp(fl_to, fd_2, bf, len);
	}
	free(bf);
	err = close(fd_1);
	if (err < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	err = close(fd_2);
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2);
		exit(100);
	}
	return (0);
}
