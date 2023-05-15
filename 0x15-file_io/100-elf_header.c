#include <stdio.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>
#define _GNU_SOURCE

void printclass(char *head);
void printdata(char *head);
void printversion(char *head);
void printabi(char *head);
void printtype(char *head);
void printentry(char *head);
/**
 * main - start of code exce
 *
 * @ac: number of arguments
 * @av: arguements strings
 *
 * Return: 0 on success.
 */
int main(int ac, char *av[])
{
	int fl, j;
	char head[32];

	if (ac != 2)
		return (1);
	fl = open(av[1], O_RDONLY);
	if (fl == -1)
		return (1);
	j = read(fl, head, 32);
	if (j == -1)
		return (1);
	if (j < 28)
		return (1);
	if (head[0] != 0x7f || head[1] != 'E' || head[2] != 'L' || head[3] != 'F')
	{
		dprintf(STDERR_FILENO, "readelf: Error: hellofile: Failed to read file header\n");
		return (98);
	}
	printf("ELF Header:\n  Magic:   ");
	for (j = 0; j < 16; j++)
		printf("%02x ", (unsigned int) head[j]);
	printf("\n");
	printclass(head);
	printdata(head);
	printversion(head);
	printabi(head);
	printtype(head);
	printentry(head);
	return (0);
}
/**
 * printclass - prints the class
 * @head: head info
 *
 * Return: nothing
 */
void printclass(char *head)
{
	printf("  %-35s", "Class:");
	if (head[4] == 2)
		printf("ELF64\n");
	else if (head[4] == 1)
		printf("ELF32\n");
	else
		printf("<Unknown: %02hx", head[4]);
}
/**
 * printdata - prints the informaation about data organization
 *
 * @head: the header info
 *
 * Return: Nothing
 */
void printdata(char *head)
{
	printf("  %-35s", "Data:");
	if (head[5] == 1)
		printf("2's complement, little endian\n");
	else if (head[5] == 2)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %02hx>", head[5]);
}
/**
 * printversion - prints the verstion
 * @head: header info
 *
 * Rerturn: Nothing
 */
void printversion(char *head)
{
	printf("  %-35s", "Version:");
	if (head[6] <= EV_CURRENT)
	{
		printf("%d", head[6]);
		if (head[6] == EV_CURRENT)
			printf(" (current)\n");
		else
			printf("\n");
	}
	else
	{
		printf(" (current)\n");
	}
}
/**
 * printabi - printss abi version from header info
 * @head: headder info
 *
 * Return: Nothing
 */
void printabi(char *head)
{
	printf("  %-35s", "OS/ABI:");
	if (head[7] == 0)
		printf("UNIX - System V\n");
	else if (head[7] == 1)
		printf("UNIX - HP-UX\n");
	else if (head[7] == 2)
		printf("UNIX - NetBSD\n");
	else if (head[7] == 3)
		printf("UNIX - Linux\n");
	else if (head[7] == 4)
		printf("UNIX - GNU Hurd\n");
	else if (head[7] == 6)
		printf("UNIX - Solaris\n");
	else if (head[7] == 7)
		printf("UNIX - AIX\n");
	else if (head[7] == 8)
		printf("UNIX - IRIX\n");
	else if (head[7] == 9)
		printf("UNIX - FreeBSD\n");
	else if (head[7] == 10)
		printf("UNIX - Tru64\n");
	else if (head[7] == 11)
		printf("UNIX - Novell Modesto\n");
	else if (head[7] == 12)
		printf("UNIX - OpenBSD\n");
	else if (head[7] == 13)
		printf("UNIX - Open VMS\n");
	else if (head[7] == 14)
		printf("UNIX - NonStop Kernel\n");
	else if (head[7] == 15)
		printf("UNIX - AROS\n");
	else if (head[7] == 16)
		printf("UNIX - Fenix OS\n");
	else if (head[7] == 17)
		printf("UNIX - CloudABI\n");
	else
		printf("<unknown: %02x>\n", head[7]);
	printf("  %-35s%d\n", "ABI Version:", head[8]);
}
/**
 * printtype - prints filetype
 * @head: head info
 *
 * Return: nothing
 */
void printtype(char *head)
{
	int j;

	if (head[5] == 1)
		j = 16;
	else
		j = 17;
	printf("  %-35s", "Type:");
	if (head[j] == 1)
		printf("REL (Relocatable file)\n");
	else if (head[j] == 2)
		printf("EXEC (Executable file)\n");
	else if (head[j] == 3)
		printf("DYN (Shared object file)\n");
	else if (head[j] == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown>: %02x%02x\n", head[16], head[17]);
}
/**
 * printentry - prints the entry address
 *
 * @head: head info
 *
 * Return: Nothing
 */
void printentry(char *head)
{
	int i, j;

	printf("  %-35s0x", "Entry point address:");
	if (head[4] == 2)
		j = 0x1f;
	else
		j = 0x1b;
	if (head[5] == 1)
	{
		i = j;
		while (head[i] == 0 && i > 0x18)
			i--;

		printf("%x", head[i--]);
		while (i >= 0x18)
			printf("%02x", (unsigned char) head[i--]);
		printf("\n");
	}
	else
	{
		i = 0x18;
		while (head[i] == 0)
			i++;
		printf("%x", head[i++]);
		while (i <= j)
			printf("%02x", (unsigned char) head[i++]);
		printf("\n");
	}
}
