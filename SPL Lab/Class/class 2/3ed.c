//Print 10 to 1 serial.
#include<stdio.h>
int main()
{
    int i;
    for(i=10;i>1;--i){ //in initialisation I can used decrement. i=i-1 and it is end the loop if i=1,
        printf("%d,",i); // print the initialisation part because i id decrement
    }
    printf("%d ",i);
    printf("Value of i: %d",i);
    return 0;
}

