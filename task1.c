// Заменить пробелы в строке на подчеркивания.

#include <stdio.h>

int main()
{
    char s[]="Hello World Lera";
    int i;

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            s[i]='_';
        }
    }
    printf("%s\n",s);

    return 0;
}