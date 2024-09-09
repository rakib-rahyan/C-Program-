/*use library functions to calculate the square of the number given by user.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter power: ");
    scanf("%d",&m);

    printf("square is: %f",pow(n,m));
    return 0;
}
