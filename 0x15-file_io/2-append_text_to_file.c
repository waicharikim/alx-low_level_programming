#include "main.h"
/**
 * append_text_to_file - apppends text to the end of a file
 * @filename: name of the fileto create
 * @text_content: string to write to file
 *
 * Return: 1 on success -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count;
	char *counter;

	count = 0;
	if (text_content)
	{
		for (counter = text_content; *counter; count++, counter++)
			;
	}
	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (write(fd, text_content, count) == -1)
		return (-1);
	close(fd);
	return (1);
}
