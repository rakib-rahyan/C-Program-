// find maximum between three numbers using ternary operator.
#include<stdio.h>
int main()
{
    int num1, num2, num3, mex;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num2);

    mex = (num1>num2) && (num1>num3) ? num1: num2>num3 ? num2:num3;

    printf("Maximum: %d\n",mex);

    main();
    return 0;
}
