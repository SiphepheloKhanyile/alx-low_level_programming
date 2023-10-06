#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
  * create_file -  a function that creates a file.
  * @filename: name of the file to create
  * @text_content: is a NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fileDescriptor;

	if (filename == NULL)
	{
		return (-1);
	}
	fileDescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileDescriptor == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		ssize_t bytesWritten = write(fileDescriptor, text_content,
				strlen(text_content));
		if (bytesWritten == -1)
		{
			close(fileDescriptor);
			return (-1);
		}
	}
	close(fileDescriptor);
	return (1);
}
