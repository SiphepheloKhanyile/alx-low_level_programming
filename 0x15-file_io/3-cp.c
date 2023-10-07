#include "main.h"
#include <stdio.h>

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: vector arguments
 * Return: 0 if success, otherwise 97-100
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, cStatus;
	char buffer[1024];
	ssize_t size;

	if (argc != 3)
		argError();

	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
		fFrom_error(argv[1]);

	f_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (f_to == -1)
		fTo_error(argv[2]);

	while ((size = read(f_from, buffer, 1024)) > 0)
	{
		if (write(f_to, buffer, size) != size)
			fTo_error(argv[2]);
	}

	if (size == -1)
		fFrom_error(argv[1]);

	cStatus = close(f_from);
	if (cStatus == -1)
		cError(f_from);

	cStatus = close(f_to);
	if (cStatus == -1)
		cError(f_to);

	return (0);
}

/**
 * argError - Print error and exit if wrong number of arguments
 * Return: void
 */
void argError(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * fFrom_error - Print error and exit if file from error
 * @fi: name of the file
 * Return: void
 */
void fFrom_error(char *fi)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fi);
	exit(98);
}

/**
 * fTo_error - Print error and exit if file to error
 * @fi: The name of the file
 * Return: void
 */
void fTo_error(char *fi)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fi);
	exit(99);
}

/**
 * cError - Print error and exit if close fails
 * @fileD: The file descriptor
 * Return: void
 */
void cError(int fileD)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileD);
	exit(100);
}
