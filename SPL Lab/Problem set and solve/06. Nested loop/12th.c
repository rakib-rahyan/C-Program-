/*
n=7
,,,*
,,***
,*****
*******
,*****
,,***
,,,*
n=5
,,*
,***
*****
,***
,,*
n=3
,*
***
,*
*/

#include<stdio.h>
int main()
{
    int n,i,j,m=1,q,w,e,k,r,t,y,p=1;
    printf("Enter your N odd number: ");
    scanf("%d",&n);
    if(n%2==1){
    q=n/2;
    w=q+1;
    e=w;
    e--;
    for(i=1; i<=w; i++)
    {
        for(k=e; k>=1; k--)
        {
            printf(",");
        }
        for(j=1; j<=m; j++)
        {
            printf("*");
        }
        m=m+2;
        e--;
        printf("\n");
    }
    n=n-2;
    for(t=1; t<=q; t++)
    {
        for(y=1; y<=p; y++)
        {
            printf(",");

        }
        p++;
        for(r=1; r<=n; r++)
        {
            printf("*");
        }
        printf("\n");
        n=n-2;
    }
    }
    else {
        printf("you enter number is not odd place run again and enter odd number");
    }
}
