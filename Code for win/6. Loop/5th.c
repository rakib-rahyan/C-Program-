#include<stdio.h>
int main()
{
    int start, range;
    printf("print all odd numbers form 1 to n please enter last number n:");
    scanf("%d",&range);

    printf("Odd numbers between 1 to %d: ",range);
    for(start; start<=range; start++){
        if(start%2!=0){
            printf("%d,", start);
        }
    }
    return 0;
}
