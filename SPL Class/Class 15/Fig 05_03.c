//demonstrating the function-call stack and stack frames using a function square
#include<stdio.h>

int square(int x);

int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);

    printf("%d squared: %d",a, square(a));
}

int square(int x)
{
    return x*x;
}
