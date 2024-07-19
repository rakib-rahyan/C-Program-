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
    int n,i,j;
    printf("n=5\n    *\n   **\n  ***\n ****\n*****\n");
    printf("Enter you N number run this program: ");
    scanf("%d",&n);
    for(i=1; i<=5; i++)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        for(j=1; j<i ; j++)
        {
            printf("*");
        }
        printf("*\n");
    }

}

