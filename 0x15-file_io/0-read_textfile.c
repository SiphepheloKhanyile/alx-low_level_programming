#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
  * read_textfile - read a text file and prints it to the POSIX standard output
  * @filename: text file name
  * @letters: number of letters it should read and print
  * Return: actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	char buffer[1024];
	ssize_t bytesRead, totalBytesRead = 0;

	if (filename == NULL)
	{
		return (0);
	}
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
	{
		return (0);
	}
	while ((bytesRead = read(fileDescriptor, buffer, sizeof(buffer))) > 0 &&
			totalBytesRead < (ssize_t)letters)
	{
		size_t bytesToPrint = (bytesRead < (ssize_t)letters - totalBytesRead)
			? bytesRead : (ssize_t)letters - totalBytesRead;
		ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesToPrint);

		if (bytesWritten == -1)
		{
			close(fileDescriptor);
			return (0);
		}
		totalBytesRead += bytesToPrint;
	}
	close(fileDescriptor);
	if (totalBytesRead < 0)
	{
		return (0);
	}
	return (totalBytesRead);
}
