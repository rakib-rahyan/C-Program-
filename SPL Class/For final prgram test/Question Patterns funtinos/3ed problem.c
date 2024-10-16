#include<stdio.h>
int main()
{
    int n=0;
    printf("Enter N for N factorial: \"but does not geter then 10\"");
    scanf("%d",&n);
    if(n<10){
        printf("%d factorial  is %d\n",n, factorial(n));
    }
    else{
        printf("Wrong input\n");
        printf("Enter agein input\n");
        main();
    }
    int a=0, b=0;
    printf("Enter a b two integer number for sum numbers: ");
    scanf("%d %d",&a, &b);
    printf("Sum of %d+%d= %d",a,b,sum(a,b));
    return 0;
}
int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++){
        fact= fact*i;
    }
    return fact;
}
int sum(int a, int b)
{
    int sum=0;
    sum=a+b;
    return sum;
}
