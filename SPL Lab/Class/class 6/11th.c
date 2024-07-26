/*
strlen
strcpy
strcat
strrev
strcmp
*/
#include<stdio.h>
#include<string.h>
int main()
{

    char a[100], b[100];
    gets(a);
    gets(b);
    puts(a);
    puts(b);
    int c;
    c=strcmp(a,b);
    printf("c: %d",c);
    return 0;
}






