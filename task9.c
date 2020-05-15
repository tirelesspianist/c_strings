// Найти самое длинное слово в строке.

#include <stdio.h>

void copy(char r[],const char s[])
{
    int k;

    for(k=0;s[k]!='\0';k++)
    {
        r[k] = s[k];
    }
    r[k]='\0';
}

int main()
{
    char s[]="Hello world Leraaaaaaaa";
    char r[100];
    char rmax[100];
    int i;
    int n;
    int max;

    i=0;
    n=0;
    max = 0;

     for(i=0;s[i]!='\0';i++)
    {
        r[n]=s[i];

        if(s[i]==' ')
        {
            r[n]='\0';
            printf ("%d",n);
            printf("\n");

            if(n>max)
            {
                max=n;
                copy(rmax,r);
            }
            n = 0;
        }
        else
        {
            n++;
            printf("%c",s[i]);
        }
    }
    r[n]='\0';
    if(n>max)
    {
        max = n;
        copy(rmax,r);
    }


    printf ("%d\n",n);
    printf("самое длинное слово %s\n",rmax);
    printf("max%d\n",max);

   return 0;
}