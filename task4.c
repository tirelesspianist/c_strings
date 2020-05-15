// Найти пробелы в строке.

#include <stdio.h>

int main()
{
    char s[]="Hello World Lera";
    int i;

    for(i=0;s[i]!=0;i++)
    {
        if(s[i]==' ')
        {
            printf("%d\n",i);
        }
    }
    return 0;
}