#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a,b number: ");
    scanf("%d %d", &a, &b);
    int *p, *q;
    p=&a;
    q=&b;
    printf("output: \n");
    if(*p==*q)
    {
        printf("%d and %d is equal",*p, *p);
    }
    else if(*p<*q)
    {
        printf("%d is maximum number", *q);
    }
    else
    {
        printf("%d is maximum number",*p);
    }
}
