#include "main.h"
#include <string.h>
#include <elf.h>
/**
 * p_data - print data version
 * @buff: buffer copy
 */
void p_data(unsigned char buff[])
{
	printf("  Data:				     ");

	if (buff[5] == 1)
		printf("2's complement, little endian\n");
	else if (buff[5] == 2)
		printf("2's complement, big endian\n");
	else
		printf("invalid\n");
}
/**
 * p_entry - prints virtual add
 * @buff: buffer copy
 */
void p_entry(unsigned char buff[])
{
	printf("  Entry point address:               ");
	if (buff[24] != 0)
		printf("0x%x%x\n", buff[25], buff[24]);
}
/**
 * p_type - prints type of file
 * @buff: buffer copy
 *
 */
void p_type(unsigned char buff[])
{
	printf("  Type:                              ");
	if (buff[16] == 0)
		printf("invalid\n");
	else if (buff[16] == 1)
		printf("REL (Relocatable file)\n");
	else if (buff[16] == 2)
		printf("EXEC (Executable file)\n");
	else if (buff[16] == 3)
		printf("DYN (Shared object file)\n");
	else if (buff[16] == 4)
		printf("CORE (Core file)\n");

}
/**
 * p_ABI - print magic line
 * @buff: buffer copy
 */
void p_ABI(unsigned char buff[])
{
	printf("  OS/ABI:			     ");

	if (buff[7] == 0)
		printf("UNIX - System V\n");
	else if (buff[7] == 1)
		printf("HP-UX ABI\n");
	else
		printf("invalid\n");
}
/**
 * p_class - print magic line
 * @buff: buffer copy
 */
void p_class(unsigned char buff[])
{
	printf("  class:			     ");

	if (buff[4] == 2)
		printf("ELF64\n");
	else if (buff[4] == 1)
		printf("ELF32\n");
	else
		printf("invalid\n");
}
/**
 * p_magic - print magic line
 * @buff: buffer copy
 */
void p_magic(unsigned char buff[])
{
	int i = 0;

	printf("  Magic:   ");
	while (i < 15)
	{
		printf("%02x ", buff[i]);
		i++;
	}
	printf("%02x\n", buff[i]);
}
/**
 * elf_checker - checks if a file is an elf file
 * @fd: fd copy
 * @buff: buff copy
 * @arg1: argv[0]
 * @arg2: argv[1]
 */
void elf_checker(unsigned char buff[], int fd, char *arg1, char *arg2)
{
	unsigned int store[4] = {127, 69, 76, 70};
	int i = 0;

	/*store = {127, 69, 76, 70};*/

	while (i <  4)
	{
		if ((unsigned int)buff[i] != store[i])
		{
			close(fd);
			dprintf(2, "%s: Error: %s: Failed to read file's magic number\n",
				arg1, arg2);
			exit(98);
		}
		i++;
	}
}
/**
 * main - write to stdin
 * @argc: arg count
 * @argv: array of args
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int fd, rd;
	unsigned char buff[64];

	if (argc != 2)
		return (-1);

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		printf("error opening");
		return (-1);
	}

	rd = read(fd, buff, 64);
	buff[64] = 0;
	if (rd == -1)
	{
		printf("error reading\n");
		return (-1);
	}
	elf_checker(buff, fd, argv[0], argv[1]);
	printf("ELF Header:\n");
	p_magic(buff);
	p_class(buff);
	p_data(buff);
	printf("  Version:			     1 (current)\n");
	p_ABI(buff);
	printf("  ABI Version:                       0\n");
	p_type(buff);
	p_entry(buff);


	return (0);
}
