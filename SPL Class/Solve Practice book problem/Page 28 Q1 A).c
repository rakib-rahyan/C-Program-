#include<stdio.h>
int main()
{
    int b;
    printf("Enter your integer input: ");
    scanf("%d",&b);
    puts("Your program output");
    if(b>=10)
    {
        printf("SPL\n");
        b--;
    }
    if(b<10)
    {
        printf("Spring\n");
        b--;
    }
    else if(b>=3||b<10)
    {
        printf("2023\n");
    }
    else if(b>=3&&b<10)
    {
        printf("Happy Coding!");
    }
    else
    {
        printf("Huh!");
    }
    return 0;
}
