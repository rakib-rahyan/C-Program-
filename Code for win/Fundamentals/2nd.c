// How to get input and output

#include<stdio.h>
int main()
{
    int number; // number is a storeg.
    printf("Just input a integer number: ");
    scanf("%d",&number); // for integer input scan

    printf("number is: %d", number); // for character output print

    char ch; // character is a storeg.
    printf("Just input a character: ");
    scanf(" %c",&ch); // for character input scan

    printf("number is: %c",ch); // for character output print

    float num2; // float_number is a storeg.
    printf("Just input a float number: ");
    scanf(" %f",&num2); // for float_number input scan

    printf("number is: %0.2f",num2); // for float_number output print


    return 0;
}
