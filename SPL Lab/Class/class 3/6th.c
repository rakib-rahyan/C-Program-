//write a program for pattern nested loop
/*
n=5
*
**
***
****
*****
*/

#include<stdio.h>
int main()
{
    int i, j, n;
    printf("n=5\n*\n**\n***\n****\n*****\n");
    printf("Enter you N number run this program: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

}

