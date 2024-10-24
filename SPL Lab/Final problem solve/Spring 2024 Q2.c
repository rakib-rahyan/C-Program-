#include<stdio.h>
int main()
{
    int n=0;
    printf("Enter the integer number: ");
    scanf("%d",&n);
    if(checkFunc1(n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
int checkFunc1(int a)
{
    if(SyraxNumber(a)&&primeChecker(a)){
        return 1;
    }
    else{
        return 0;
    }
}
int SyraxNumber(int a)
{
    int Even_sum=0, Odd_sum=0;
    while(a!=0){
        int digit =a%10;
        if(digit %2 == 0){
            Even_sum+=digit;
        }
        else{
            Odd_sum+=digit;}
        a/=10;
    }
    if(Even_sum>Odd_sum){
        return 1;
    }
    else{
        return 0;
    }
}
int primeChecker(int a)
{
    if(a<=1){
        return 0;
    }
    else {
        for(int i=2; i*i<=a;i++){
            if(a%i==0){
                return 0;
            }
        }
        return 1;
    }
}
