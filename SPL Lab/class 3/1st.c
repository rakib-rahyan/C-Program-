#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d",&n);

    for(i=1; i<n; i++)
    {
        if(i%2==0)
            printf("0, ");
        else
            printf("1, ");
    }
    if(i%2==0)
        printf("0 ");
    else
        printf("1 ");
}
