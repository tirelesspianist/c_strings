// Определить является ли строка палиндромом.

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

void rev (const char s[], char r[])
{
   int n;
   int y;
   int x;

   x = len(s);

   for (n = x-1, y = 0; n>=0; --n,++y)
   {
      r[y] = s[n];
   }
   r[y]= 0;

}
int CompereStrings(const char a[],const char b[])
{
    int i;

    i = 0;
    while(a[i]==b[i] && a[i] != 0)
    {
        i++;
    }
    if(a[i]==b[i])
       return 1;

      return 0;
}

int main()
{
    char s[100];
    char r [100];

    GetString(s,sizeof(s));
    rev(s,r);

    printf("%s\n",r);

    if(CompereStrings(s,r))
    {
        printf("строки равны\n");
    }
    else
    {
        printf("строка является палиндромом\n");
    }

    return 0;
}