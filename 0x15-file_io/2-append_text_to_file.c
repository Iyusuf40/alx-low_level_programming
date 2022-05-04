#include "main.h"
#include <string.h>
/**
 * append_text_to_file - creates a file if it doesnt exist
 * @filename: name of file to create
 * @text_content: content of the file
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	if (!text_content)
	{
		return (1);
	}
	w = write(fd, text_content, strlen(text_content));

	if (w < 0)
		return (-1);

	close(fd);
	return (1);
}
