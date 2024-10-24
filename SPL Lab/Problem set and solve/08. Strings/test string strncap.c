#include<stdio.h>
int main()
{
    char src[] = "Hello, World!";
    char dest[100]="Rakib Rahyan";
    strncpy(dest, src, 5);
    printf("%s", dest);
}

