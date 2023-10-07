#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
  * error_exit - exit function if encountered error
  * @code: error code
  * @message: error message
  * Return: void
  */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}
int main(int argc, char *argv[]);
/**
  * main - program that copies the content of a file to another file.
  * @argc: arguement count
  * @argv: argument var
  * Return: 0
  */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to");
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		error_exit(98, "Can't read from file");
	}
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		error_exit(99, "Can't write to file");
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			error_exit(99, "Can't write to file");
		}
	}
	if (bytes_read == -1)
	{
		error_exit(98, "Can't read from file");
	}
	if (close(fd_from) == -1)
	{
		error_exit(100, "Can't close file descriptor");
	}
	if (close(fd_to) == -1)
	{
		error_exit(100, "Can't close file descriptor");
	}
	return (0);
}
