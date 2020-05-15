// Заменить пробелы в строке на троеточие.

#include <stdio.h>

int main()
{
    char s[]="Hello Lera";
    char r[100];
    int i;
    int j;

    i = 0;
    j = 0;

    while(s[i] != 0)
    {
        if(s[i]==' ')
        {
            r[j] = '.';
            j++;
            r[j] = '.';
            j++;
            r[j] = '.';
        }
        else
        {
            r[j]=s[i];
        }
        i++;
        j++;
    }
    printf ("%s",r);

   return 0;
}