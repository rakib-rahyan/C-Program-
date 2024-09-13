#include<stdio.h>
int EvenOdd(int n);
int main()
{
    int n;
    printf("Enter you number: ");
    scanf("%d",&n);
    EvenOdd(n);
    return 0;
}

int EvenOdd(int n)
{
    if(n%2==0){printf("Even");}
    else{printf("Odd");}
}
