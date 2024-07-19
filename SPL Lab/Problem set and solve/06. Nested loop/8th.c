// square shape pattern ib nested loop
#include<stdio.h>
int main()
{
    int i, n, j; // declare the variable
    // show output for you get input from user
    printf("This is a square shape pattern\n");
    printf("Enter value of N, N is you want to print * vertically = horizontally: ");
    // user input store in variable
    scanf("%d",&n);
    // this loop-1 is for how many row print.
    for(i=0; i<n; i++)
    {
        // this loop-2 for how many column print
        for(j=0; j<n-i; j++)
        {
            printf("*"); // for print *
        }
        printf("\n"); // this for new line after run loop-2
    }
}

