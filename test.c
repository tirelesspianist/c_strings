#include <stdio.h>

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
    char s[]="Hello world";
    int n;
    int m;

    n = len(s);
    m = sizeof(s);

    printf("len %d siz %d",n,m);
}