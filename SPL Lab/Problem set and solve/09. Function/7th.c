#include<stdio.h>
int SumNum(int x, int b[]);
int main()
{
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n; i++)
   {
       printf("%d Enter: ",i);
       scanf("%d",&a[i]);
   }
   printf("Sum in main: %d",SumNum(n,a));
   return 0;
}

SumNum(int n, int b[])
{
    int num=0, total=0;
    for(int i=0; i<n; i++)
    {
        total+=b[i];
    }
    printf("Sum in Function: %d\n", total);
    return total;
}

