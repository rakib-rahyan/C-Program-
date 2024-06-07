#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float value;
    float ceilingValu, floorValue, absolute;
    printf("Input X: ");
    scanf("%f",&value);

    ceilingValu = ceil(value);
    floorValue = floor(value);

    absolute= abs(value);

    printf("Value=:%f\n",value);
    printf("Ceiling: %f\n",ceilingValu);
    printf("Floor: %f\n",floorValue);
    printf("Absolute: %f\n",absolute);

    return 0;
}
