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
    int n=5,m,i,j,k;
    m=n/2+1;
    for(i=1;i<=n;){
        for(j=1; j<=5;j++){// 5 line 3 times; 3 line 2 times; 9 line 3 times
            printf("*");
        }
        printf("\n");
        i++;
        for(k=1; k<=m; k++){
            printf("*");
            for(j=1; j<=n-2; j++){
                printf(".");
            }
            printf("*");
            printf("\n");
            i++;
        }
    }
}
