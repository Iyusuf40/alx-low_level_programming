#ifndef HEADER
#define HEADER

/**
 * struct r_ptr - struct with char member and pointer to char member
 * @f1: receives char * arg
 * @f2: receives int arg
 * @f3: receives double arg
 * @f4: receives int arg
 */
typedef struct r_ptr
{
	void (*f1)(char *);
	void (*f2)(int);
	void (*f3)(double);
	void (*f4)(int);
} ptr_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
