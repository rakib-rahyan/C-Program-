#include<stdio.h>
int main()
{
 char s[100];
 gets(s);
 char *p;
 int z=0;
 p=&s;
 for(int i=0; *(p+i)!='\0'; i++){
 z++;
 }

 printf("%d",z);
 return 0;
}

