#include<stdio.h>
int CalFac(int n);
int main()
{
    int n;
    printf("Enter your factorial N number: ")
    scanf("%d",&n);
    printf("%d of factorial: %d",n,CalFac(n));
    return 0;
}

CalFac(int n)
{
    int fact=1;
    for(int i=n; i>0; i--)
    {
        fact*=i;
    }
    return fact;
}


