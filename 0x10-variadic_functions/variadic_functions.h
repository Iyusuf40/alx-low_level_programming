#ifndef HEADER
#define HEADER

/**
 * struct r_ptr - struct with char member and pointer to char member
 * @c: the char
 * @pt: the pointer
 */
typedef struct r_ptr
{
	char c;
	char *pt;
} ptr_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
