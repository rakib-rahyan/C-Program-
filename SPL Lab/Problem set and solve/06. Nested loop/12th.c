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
    int n, l=1;
    printf("Enter your N odd number: ");
    scanf("%d",&n);
    if(n%2==1)
    {
        for(int i=0; i<n*2-1; i++)
        {
            if(i<n)
            {
                for(int j=1; j<n-i; j++)printf(".");
                for(int j=0; j<l; j++)printf("*");
                l+=2;
            }
            else
            {
                for(int j=n; j<=i; j++)printf(".");
                l-=2;
                for(int j=l; j>2; j--)printf("*");
            }
            printf("\n");
        }

    }
    else
    {
        printf("you enter number is not odd place run again and enter odd number");
    }
}
