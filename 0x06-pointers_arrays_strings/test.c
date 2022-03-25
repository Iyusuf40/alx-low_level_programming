#include <stdio.h>
/**
 * string_toupper - conv to upper
 * @c: arg
 * Return: c
 */
char *cap_string(char *c)
{
	int i = 0;

	while (*(c + i) != '\0')
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
			if (*(c + i - 1) < '0' || *(c + i - 1) > '9')
				if ((*(c + i - 1) < 'A' || *(c + i - 1) > 'Z') &&
						(*(c + i - 1) < 'a' || *(c + i - 1) > 'z'))
					*(c + i) = *(c + i) - 32;
		i++;
	}
	return (c);
}

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
