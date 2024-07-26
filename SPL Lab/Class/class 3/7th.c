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
    int n,i,j,k;
    printf("n=5\n    *\n   **\n  ***\n ****\n*****\n");
    printf("Enter you N number run this program: ");
    scanf("%d",&n);
    for(i=1; i<=5; i++)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        for(k=1; k<i ; k++)
        {
            printf("*");
        }
        printf("*\n");
    }

}
