#include<stdio.h>
int main()
{
    int start=1, limit, sum=0;
    printf("Sum of natural numbers \nfor example: 1-10:55\n");
    printf("Input upper limit: ");
    scanf("%d",&limit);

    for(start; start<=limit; start++){
        sum=sum+start;
    }
    printf("Sum of natural number 1-%d: %d",limit, sum);
    return 0;
}
