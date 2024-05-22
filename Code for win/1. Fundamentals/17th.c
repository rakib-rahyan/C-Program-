
// Calculate simple Interest
#include<stdio.h>
int main()
{
    float principle, time, ratel, si;
    printf("Enter principle: ");
    scanf("%f",&principle);
    printf("Enter time: ");
    scanf("%f",&time);
    printf("Enter ratel: ");
    scanf("%f",&ratel);

    si=(principle*time*ratel)/100;

    printf("Simple Interest = %f\n",si);


    main(); //if you want to many times run program than write main()
    return 0;
}
