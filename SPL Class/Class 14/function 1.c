#include<stdio.h>
void calsum(int totalnum);
int main()
{
    int totalnum;
    scanf("%d",&totalnum);
    printf("sum is main: %d",calsum(totalnum));
    return 0;
}

void calsum(int totalnum)
{
    int num, sum=0;
    for(int i=0; i<totalnum;i++){
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("%d\n",sum);
    return sum;
}
