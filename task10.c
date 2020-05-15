// Найти символ в строке.

#include <stdio.h>

void GetString(char s[],int n)
{
    char c;
    int i;

    i = 0;
    while(i < n-1)
    {
        c = getchar();
        if(c=='\n')
           break;

        s[i]= c;
        i++;
    }
    s[i] = '\0';
}

int main()
{
    char s[100];
    char c;
    int i;

    printf("введите строку\n");
    GetString(s,sizeof(s));
    printf("введите символ\n");
    c = getchar();

    for(i=0; s[i]!='\0';i++)
    {
        if(s[i]==c)
        {
            printf("%c %d\n",s[i],i);
        }
    }

    return 0;
}