//find sum of odd numbers between 1 to N.
#include<stdio.h>
int main()
{
    int limit, start, sum=0;
    printf("sum of odd numbers between 1 to N\npleace input N\n");
    printf("input upper limit of odd number: ");
    scanf("%d",&limit);

    for(start; start<=limit; start++){
        if(start%2!=0){
            sum=sum+start;
        }
    }
    printf("Sum of odd numbers between 1 to %d: %d\n",limit, sum);
    return 0;
}
