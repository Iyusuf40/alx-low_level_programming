#include "main.h"
#include <string.h>
/**
 * _read- reads from a file to buff
 * @file: source
 * @buff: save
 * Return: -1 or 1
 */
int _read(char *file, char *buff)
{
	int fd, rd, i = 0;

	if (file == NULL || *file == 0)
		return (-1);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	while (1)
	{
		rd = read(fd, (buff + i), 1024);
		if (rd != 1024)
			break;
		i += rd;
	}
	if (rd < 0)
		return (-1);

	rd = close(fd);
	if (rd < 0)
		return (-2);

	return (1);
}
/**
 * _write- write to a file
 * @file: destination
 * @buff: save
 * Return: -1 or 1
 */
int _write(char *file, char *buff)
{
	int fd, wr;

	if (!file || *file == 0)
		return (-1);

	fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fd < 0)
		return (-1);

	wr = write(fd, buff, strlen(buff));
	if (wr < 0)
		return (-1);
	wr = close(fd);
	if (wr < 0)
		return (-2);
	return (1);
}
/**
 * main - a program that copies a file to another file
 * @argc: no of args passed
 * @argv: array of pointers to args passed
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int ret;
	char buff[10000];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ret = _read(argv[1], buff);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (ret == -2)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	ret = _write(argv[2], buff);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	if (ret == -2)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
