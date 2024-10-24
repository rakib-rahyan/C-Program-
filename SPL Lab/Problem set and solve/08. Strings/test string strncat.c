#include<stdio.h>
int main()
{
    char src[] = "World!";
    char dest[20] = "Hello, ";
    strncat(dest, src, 3);
    printf("%s", dest);

}

