#include <string.h>
#include "main.h"
/**
 * read_textfile - reads filename to a buffer
 * @filename: file
 * @letters: bytes to read
 * Return: number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ret;
	char *buff;
	int fd;

	fd = open(filename, O_RDONLY);
	if (filename == NULL || fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	ret = read(fd, buff, letters);

	if (ret == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	buff[letters] = '\0';

	ret = 0;

	ret = write(1, buff, strlen(buff));

	free(buff);

	return (ret);
}
