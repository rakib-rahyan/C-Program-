//sum 1*2*3...+n=?
#include<stdio.h>
int main()
{
    printf("Enter end number: "); //print for show output
    int i, p=1,n;
    scanf("%d",&n); // this command for input.

    for(i=1;i<=n;i++){ // this command for how many time run this promgram
        p=p*i;
    }
    printf("Product: %d",p); // last print the final result.

main(); // this main for run for full program
}

