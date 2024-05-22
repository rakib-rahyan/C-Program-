//Perform all arithmetic operations
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Input first number: ");
    scanf("%d",&num1);
    printf("Input second number: ");
    scanf("%d",&num2);

    printf("Sum: %d\n",num1+num2);
    printf("Difference: %d\n",num1-num2);
    printf("Product: %d\n",num1*num2);
    printf("Quotient: %d\n",num1/num2);
    printf("Modulus: %d\n",num1%num2);

    return 0;

}
