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
    strcat(a,b);
    strcat(b,a);
    puts(a);
    puts(b);
    return 0;
}





