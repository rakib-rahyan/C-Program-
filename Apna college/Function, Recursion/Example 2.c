/* practice qs 30 Sum of first n natural numbers. (i am  not understand fully)*/
#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter sum of N natural number: ");
    scanf("%d",&n);
    printf("Sum is: %d", sum(n));
    return 0;
}
//recursion funtion
int sum(int n)
{
    if(n == 1){
        return 1;
    }
    int sumNm1=sum(n-1);//sum of 1 to 0
    int sumN=sumNm1+n;
    return sumN;
}
