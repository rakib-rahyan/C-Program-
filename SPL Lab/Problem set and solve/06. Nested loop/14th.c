/*
n=3
***
*.*
***
n=5
*****
*...*
*****
*...*
*****
n=7
*******
*.....*
*.....*
*******
*.....*
*.....*
*******
n=9
*********
*       *
*       *
*       *
*********
*       *
*       *
*       *
*********
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter your N odd number: ");
    scanf("%d",&n);
    if(n%2==1)
    {
        if(n!=3)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(i==0 || i==n/2 || i==n-1 || j==0 || j==n-1)printf("*");
                    else printf(" ");
                }
                printf("\n");
            }

        }
        else
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(i==0 || i==n-1 || j==0 || j==n-1)printf("*");
                    else printf(" ");
                }
                printf("\n");
            }
        }

    }
    else
    {
        printf("you enter number is not odd place run again and enter odd number");
    }
}
