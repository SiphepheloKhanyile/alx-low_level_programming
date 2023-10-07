#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
  * append_text_to_file - a function that appends text at the end of a file.
  * @filename: the name of the file
  * @text_content: NULL terminated string to add at the end of the file
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor;

	if (filename == NULL)
	{
		return (-1);
	}
	fileDescriptor = open(filename, O_WRONLY | O_APPEND);

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
			return (-1);
		}
	}
	close(fileDescriptor);
	return (1);
}
