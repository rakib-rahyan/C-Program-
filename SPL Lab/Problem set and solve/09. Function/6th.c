#include<stdio.h>
int SumNum(int x);
int main()
{
   int n;
   scanf("%d",&n);
   printf("Sum in main %d",SumNum(n));
   return 0;
}

SumNum(int n)
{
    int num=0, total=0;
    for(int i=0; i<n; i++)
    {
        printf("%d Enter: ",i);
        scanf("%d",&num);
        total+=num;
    }
    printf("Sum in Function: %d\n", total);
    return total;
}
