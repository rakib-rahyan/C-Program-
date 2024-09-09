#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    int s=sum(a,b);
    printf("Sum is : %d ",s);
    return 0;
}
int sum(int x, int y) //x=a, y=b (copy)
//int sum(int b, int a) //b=a, a=b
{
    int p;
    p=x+y;
    return p;
    // or
    //return x+y;
}
