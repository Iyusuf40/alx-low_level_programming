#include <stdio.h>
/**
 * change- changes chars
 * @c: par
 * @a: sec par
 * @z: third par
 * Return: c
 */
char *change(char *c, char a, char z)
{
        int i = 0;

        while (*(c + i) != '\0')
        {
          if ((*(c + i) >= a && *(c + i) <= z) && ((float)*(c + i) - (a - 1)) / 13 > 1)
            *(c + i) = *(c + i) - 13;
          else if ((*(c + i) >= a && *(c + i) <= z) && ((float)*(c + i) - (a - 1)) / 13 <= 1)
            *(c + i) = *(c + i) + 13;
          i++;
        }
        return (c);
}

/**
 * rot13- encodes numbers
 * @c: par
 * Return: c
 */
char *rot13(char *c)
{
        change(c, 'a', 'z');
        change(c, 'A', 'Z');
        return (c);
}
int main(void)
{
   char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}

