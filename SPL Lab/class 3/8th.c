//write a program for pattern nested loop
/*
n=5
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
int main()
{
    int n, i, j, k;

    printf("n=5\n*****\n ****\n  ***\n   **\n    *\n");
    printf("Enter you N number run this program: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(k=1; k<=i-1; k++){
            printf(" ");
        }
        for(j=i; j<=n; j++){
            printf("*");
        }

        printf("\n");
    }
}
