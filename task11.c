// найти слово в строке.

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
int len(const char s[])
{
  int i = 0;
  while(s[i]!=0)
  {
      i++;
  }

  return i;
}

int main()
{
    char s[100];
    char r[100];
    int i;
    int n;
    int c;
    int k;

    GetString(s,sizeof(s));
    GetString(r,sizeof(r));

    c=len(r);
    k=len(s);

    i = 0;
    while(i<=k-c)
    {
        for(n=0;n<c;n++)
        {
           printf("%c %c\n",r[n],s[i+n]);
           if(r[n]!=s[i+n])
           {
               break;
           }

        }
        if(n==c)
        {
            printf("%d\n",i);
        }

        i++;
    }

    return 0;
}