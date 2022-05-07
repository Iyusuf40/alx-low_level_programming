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

	if (buff[5] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (buff[5] == ELFDATA2MSB)
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
	if (buff[26] != 0)
		printf("0x%x%x%x%x\n", buff[27], buff[26], buff[25], buff[24]);
	else if (buff[25] != 0)
		printf("0x%x%x%x\n", buff[26], buff[25], buff[24]);
	else if (buff[24] != 0)
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
	if (buff[16] == EM_NONE)
		printf("invalid\n");
	else if (buff[16] == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (buff[16] == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (buff[16] == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (buff[16] == ET_CORE)
		printf("CORE (Core file)\n");

}
/**
 * p_ABI - print magic line
 * @buff: buffer copy
 */
void p_ABI(unsigned char buff[])
{
	printf("  OS/ABI:			     ");

	if (buff[7] == ELFOSABI_SYSV)
		printf("UNIX - System V\n");
	else if (buff[7] == ELFOSABI_HPUX)
		printf("HP-UX\n");
	else if (buff[7] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (buff[7] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (buff[7] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (buff[7] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else
		printf("<unknown: %02x\n>", buff[7]);
}
/**
 * p_class - print magic line
 * @buff: buffer copy
 */
void p_class(unsigned char buff[])
{
	printf("  class:			     ");

	if (buff[4] == ELFCLASS64)
		printf("ELF64\n");
	else if (buff[4] == ELFCLASS32)
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
	if (buff[6] != EV_CURRENT)
		printf("  Version:                           %c (invalid version)\n",
		(buff[6] + '0'));
	else
		printf("  Version:			     1 (current)\n");
	p_ABI(buff);
	printf("  ABI Version:                       0\n");
	p_type(buff);
	p_entry(buff);


	return (0);
}
