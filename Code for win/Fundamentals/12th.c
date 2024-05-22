// find square root of a number

#include<stdio.h>
#include<math.h>
int main()
{
    float num, num1;
    printf("Enter any number: ");
    scanf("%f",&num);

    num1=sqrt(num);

    printf("Square root of %0.2f= %0.2f\n", num, num1);

    main(); //if you want to many times run program than write main()

    return 0;
}

