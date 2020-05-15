// Вывести строку без пробелов.

#include <stdio.h>

int main()
{
    char s[]="Hello World Lera";
    int i;

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {

        }
        else
        {
            printf("%c",s[i]);
        }
    }
    return 0;
}