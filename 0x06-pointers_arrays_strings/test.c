#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  int n, i, j, l, m, longer, alen, blen;
  char c[40];
  char a[100] = "7";
  char b[100] = "9";

  n = i = j = m = longer = alen = blen = 0;

  
  while (*(a + alen) != '\0')
    alen++;
  
  while (*(b + blen) != '\0')
    blen++;

  i = alen - 1;
  j = blen - 1;
  

  if (blen >= alen)
  {  
    longer = blen;
    l = longer;
    n = longer - 1;
    while(n >= 0)
    {
        if ((((b[n] - '0') > 9) && (i == 0)) || ((((b[n] - '0') + (a[i]) - '0') > 9) && (i == 0)))
        {
          if (n == 0)
          {
            c[n] = (((((b[n] - '0') % 10) + (a[i] - '0')) % 10) + '0');
             while(m <= longer)
             {
               c[l] = c[l - 1];
               m++;
               l--;
             }
            c[0] = '1';
          }
        }
        else if((b[n] - '0') > 9 && i < 0)
        {
          if (n == 0)
          {
            c[n] = ((b[n] - '0') % 10) + '0';
             while(m <= longer)
             {
               c[l] = c[l - 1];
               m++;
               l--;
             }
            c[0] = '1';
          }
          else
          {
            c[n] = ((b[n] - '0') % 10) + '0';
            b[n - 1] = b[n - 1] + 1;
          }
        }
        else if (i < 0)
          c[n] = b[n];
        else if ((b[n] - '0') + (a[i] - '0') > 9)
        {
          c[n] = (((b[n] - '0') + (a[i] - '0')) % 10) + '0';
          b[n - 1] = b[n - 1] + 1;
        }
        else
          c[n] = ((b[n] - '0') + (a[i] - '0') + '0');
        i--;
        n--;
    }
  }
  else
  {  
      longer = alen;
      l = longer;
      n = longer - 1;
     while(n >= 0) 
      {
      if((a[n] - '0') > 9 && j < 0)
      {
        if (n == 0)
        {
        c[n] = ((a[n] - '0') % 10) + '0';
         while(m <= longer)
         {
           c[l] = c[l - 1];
           m++;
           l--;
         }
          c[0] = '1';
        }
        else
        {
          c[n] = ((a[n] - '0') % 10) + '0';
          a[n - 1] = a[n - 1] + 1;
        }
      }
      else if (j < 0)
      {
        c[n] = a[n];
      }
      else if ((a[n] - '0') + (b[j] - '0') > 9)
      {
        c[n] = (((a[n] - '0') + (b[j] - '0')) % 10) + '0';
        a[n - 1] = a[n - 1] + 1;
      }
      else
      {
        c[n] = ((a[n] - '0') + (b[j] - '0') + '0');
      }
      j--;
      n--;
      }
  }
  

  
  n = 0;
  while (n < longer + 1)
  {
  printf("%c", c[n]);
  n++;
  }
  printf("\n");
  return (0);
}
