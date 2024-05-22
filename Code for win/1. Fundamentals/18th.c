
// Calculate Compound interest
#include<stdio.h>
int main()
{
    float principle, time, ratel, ci;
    printf("Enter principle: ");
    scanf("%f",&principle);
    printf("Enter time: ");
    scanf("%f",&time);
    printf("Enter ratel: ");
    scanf("%f",&ratel);

    ci= principle*pow((1+ratel/100),time);

    printf("Compound Interest = %f\n",ci);


    main(); //if you want to many times run program than write main()
    return 0;
}
