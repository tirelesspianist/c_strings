// Найти самое длинное слово.

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
    char s[]="Hellooo world Lera";
    int i;
    int n;
    int max;

    i=0;
    n=0;
    max = 0;

    for(i=0;s[i]!='\0';i++)
    {

        if(s[i]==' ')
        {
            printf ("%d",n);
            printf("\n");

            if(n>max)
            {
                max=n;
            }
            n = 0;
        }
        else
        {
            n++;
            printf("%c",s[i]);
        }
    }

    printf ("%d\n",n);
    printf("max%d\n",max);

   return 0;
}