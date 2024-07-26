//write a program for pattern nested loop
/*
if n=5
*****
****
***
**
*
*/
#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d",&n);
    for(i=1; i<=n; i++) // this loop user input n and the loop run n times or n times print new line.
    {
        //this loop user input n and the loop run n times or n times print "*".
        //this loop condition in initialisation j=i (i is in 1st loop) than the loop run i to n times, if i+=1 then run i+1 to n times.
        for(j=i; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");// for 1st loop print new line after complete 2 loop then check 1st loop condition.
    }
    return 0;
}
