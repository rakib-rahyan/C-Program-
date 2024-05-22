// find maximum between two number using ternary operator.
#include<stdio.h>
int main()
{
    int num1, num2,mex;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    mex=num1>num2?num1:num2; // if num1>num2 is true then mex =num1 or false then mex = num2.
    printf("Maximum: %d",mex);

    main();
    return 0;
}
