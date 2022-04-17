#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void (*get_funcf(__attribute__((unused))char s))(double);
void (*get_func_c(__attribute__((unused))char s))(char *);

void cprint(int b)
{
  printf("%c", b);
}

void iprint(int b)
{
  printf("%d", b);
}

void sprint(char *b)
{
        if (b == 0)
        {
                printf("(nil)");
                return;
        }
        printf("%s", b);
}

void fprint(double b)
{
  printf("%f", b);
}
void (*get_func(__attribute__((unused))char s))(int)
{
        int i = 0;
        ptr_t p = {sprint, cprint, fprint, iprint};
        while (i < 4)
        {
              if (s == 'c' )
                    return (p.f2);
              else if (s == 'i' )
                    return (p.f4);
              else if (s == 'f' )
                    return ((void (*)(int))1);
              else if (s == 's' )
                    return ((void (*)(int))2);
              i++;
        }
        return(0);
}
void (*get_funcf(__attribute__((unused))char s))(double)
{
        return (fprint);
}
void (*get_func_c(__attribute__((unused))char s))(char *)
{
        return (sprint);
}
void print_all(const char * const format, ...)
{
        int i = 0;
        va_list ap;

        if (format == 0)
                return;
        va_start(ap, format);

        while (format[i] != 0)
        {
                if (get_func(format[i]) != 0)
                {
                        if (format[i] != 'f' && format[i] != 's' )
                              get_func(format[i])(va_arg(ap, int));
                        else if (get_func(format[i]) == (void (*)(int))1)
                              get_funcf(format[i])(va_arg(ap, double));
                        else
                              get_func_c(format[i])(va_arg(ap, char *));
                        if (format[i + 1] != 0)
                                printf(", ");
                }
                i++;
        }
        printf("\n");
        va_end(ap);
}

