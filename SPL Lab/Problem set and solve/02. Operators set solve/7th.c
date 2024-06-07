#include<stdio.h>
int main()
{
    int a;
    float b;

    printf("If you want show type casting pleace enter 1st int 2nd float numbers: ");
    scanf("%d %f",&a,&b);

    int e=(int) b;
    float d= (float) a;
    printf("Assignment: %f assigned to an int produces %d\n",b,e);
    printf("Assinment: %d assigned to a float produces: %f\n",a,d);
    printf("Type Casting:(float) %d produces %f\n",a,d);
    printf("Type Casting:(int) %0.3f produces %d\n",b,e);



    return 0;
}
