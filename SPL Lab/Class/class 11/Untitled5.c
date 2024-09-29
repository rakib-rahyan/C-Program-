#include<stdio.h>
#include<string.h>
int main()
{
 char s[100];
 gets(s);
 char *p;
 int length=strlen(s);
 p = &length;

 printf("%d",*p);
 return 0;
}

