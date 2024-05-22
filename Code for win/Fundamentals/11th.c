// find power of a number using pow function

#include<stdio.h>
#include<math.h>
int main()
{
    int base, exponent, output;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d",&exponent);

    output= pow(base, exponent); // pow is a power function

    printf("Output: %d",output);

    return 0;
}

