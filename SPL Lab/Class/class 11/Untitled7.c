#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    char *p=str;
    int i=0;
    for(i=0;*p;p++,i++);

    printf("%d",i);
    return 0;
}


