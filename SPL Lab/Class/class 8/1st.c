/* made a add function*/
#include<stdio.h>
int main()
int add(int a, int b);
{
    int a,b;
    printf("Enter A and B for adding in funtions: ");
    scanf("%d %d",&a, &b);
    int res;
    res= add(a,b);
    printf("Result is: %d",res);
    return 0;
}
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

