// print: 1,2,3,4,5,6,7,8,9,10
#include<stdio.h>
int main()
{
    int i=1,n,s;
    printf("Enter n for 1 to n print: ");
    scanf("%d",&n);
    // condition run for while loop
    while(i<=(n-1)){ // in condition for want to print (n, n, n) can't print (n,n,n,)
       // i++; (if i can used this line in output 1st i=i+1 then print i
         printf("%d,",i); // print the all output
        i++;            // in while loop last i in increment
    }
    printf("%d",i); // this print again because I want to last point can't print ","
    return 0;

}

