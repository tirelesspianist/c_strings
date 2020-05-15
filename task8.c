// Посчитать длину слов в строке.

#include <stdio.h>

int main()
{
    char s[]="Hello world Lera";
    int i;
    int n;

    i=0;
    n=0;

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            printf ("%d",n);
            printf("\n");
            n=0;
        }
        else
        {
            n++;
            printf("%c",s[i]);
        }
    }

    printf ("%d",n);

   return 0;
}