// if I Enter 7
// print this 1, 0, 1, 0, 1, 0, 1
#include<stdio.h>
int main()
{
    int n, i; // declare the variable
    printf("Enter N: "); // for show you can a input
    scanf("%d",&n);     // input store in variable

    for(i=1; i<n; i++) // write a loop or run the program N times
    {
        if(i%2==0)  // define this is odd or even
            printf("0, ");
        else
            printf("1, ");
    }
    // last write this part for I don't write last a comma",".
    if(i%2==0)
        printf("0 ");
    else
        printf("1 ");

    return 0;
}
