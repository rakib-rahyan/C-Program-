//sum 1+2+3...+10=?
#include<stdio.h>
int main()
{
    int sum=0,i=0;

    for(i=0;i<=10;i++){  //condition for loop.
        sum=sum+i;   // in increment i adding with sum add store in sum variable.
    }
    printf("sum: %d",sum); // print total sum.

}
