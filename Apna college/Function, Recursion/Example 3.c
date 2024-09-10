/* Practice qs 31 Factorial of n"*/
#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter sum of N natural number: ");
    scanf("%d",&n);
    printf("factorial is: %d", fact(n));
    return 0;
}
//recursion funtion
int fact(int n)
{
    if(n == 0){
        return 1;
    }
    int factNm1=fact(n-1);//sum of 1 to 0
    int factN=factNm1*n;
    return factN;
}

