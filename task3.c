// Paзбить строку разделенную разными символами на слова.

#include <stdio.h>

int main()
{
    char s[]="Hello World;Lera";
    int i;

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ' || s[i]==';')
        {
            s[i]='\n';
        }
        printf ("%c",s[i]);
    }

    return 0;
}