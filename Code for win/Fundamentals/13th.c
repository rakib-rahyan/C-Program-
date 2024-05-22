// find angles of triangle if two angles are given
#include<stdio.h>
int main()
{
    int angle_1, angle_2, angle_3;
    printf("Enter first angle: ");
    scanf("%d",&angle_1);
    printf("Enter second angle: ");
    scanf("%d",&angle_2);
    // angular formula
    angle_3= 180-(angle_1+angle_2);
    printf("Third angle= %d\n",angle_3);

    main(); //if you want to many times run program than write main()
    return 0;
}

