// square shape pattern ib nested loop
#include<stdio.h>
int main()
{
    int i, X, Y, j; // declare the variable

    printf("This is a X, Y shape * pattern\n"); // show output for you get input from user
    printf("Enter value of X vertically: ");
    // user input store in variable
    scanf("%d",&X);
    printf("Enter value of Y horizontally: ");  // show output for you get input from user
    // user input store in horizontally
    scanf("%d",&Y);
    // this loop-1 is for how many row print.
    for(i=1; i<=Y; i++)  //loop in Y times
    {
        // this loop-2 for how many column print
        for(j=1; j<=X; j++) // loop in X times
        {
            printf("*"); // for print *
        }
        printf("\n"); // this for new line after run loop-2
    }
}
