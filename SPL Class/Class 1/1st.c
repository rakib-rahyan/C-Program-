
#include<stdio.h>
int main()
{
    int sum, input, run, i=0;
    scanf("%d",&run);
    for(i; run>i; i++){
        scanf("%d",&input);
        sum=sum+input;
    }
    printf("sum: %d",sum);
    return 0;
}
