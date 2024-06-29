/*
n=4
1,,,,,1
12,,,21
123,321
1234321
n=3
1,,,1
12,21
12321
*/

#include<stdio.h>
int main()
{
    int n,m=1, i, j, k, l,e=1,t=1;
    printf("Enter your N number: ");
    scanf("%d",&n);
    m=n;
    if(m%2==1)
    {
        m+=2;
    }
    else
    {
        m+=1;
    }

    for(i=1; i<=n; i++)
    {
        int q=1;
        for(j=1; j<=i; j++)
        {
            printf("%d",q);
            q++;
        }
        for(k=1; k<=m; k++)
        {
            printf(",");
        }
        if(t==n)
        {
            t=t-1;
        }
        for(l=t; l>=1; l--)
        {
            printf("%d",l);

        }
        m-=2;
        t+=1;
        printf("\n");
    }
}

