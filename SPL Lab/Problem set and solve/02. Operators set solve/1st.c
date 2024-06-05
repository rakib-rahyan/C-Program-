//Take two numbers X and Y as inputs, then addition, subtraction, multiplication, divison (quotient and reminder)
#include<stdio.h>
int main()
{
    int x,y;
    printf("Input (X,Y):");
    scanf("%d %d",&x, &y);

    float q = (float) x/y;

    printf("Addition: %d\n",x+y);
    printf("Subtraction: %d\n",x-y);
    printf("Multiplication: %d\n",x*y);
    printf("Quotient: %.3f\n",q);
    printf("Reminder: %d\n",x%y);

    return 0;
}
