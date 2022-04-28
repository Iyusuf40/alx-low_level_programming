#ifndef HEADER
#define HEADER

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
