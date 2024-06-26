// series of 1,4,9,16
#include<stdio.h>
int main()
{
    int i, n,s; //declare the variable
    printf("Enter how many time run: ");
    scanf("%d",&n); // for input
    for(i=1; i<n; i++){ // this program run n times run
        s=i*i;             // calcualtion the program
        printf("%d, ",s);    // print the output
    }
    printf("%d ",s);  // this print again because I want to last point can't print ","
    return 0;
}
