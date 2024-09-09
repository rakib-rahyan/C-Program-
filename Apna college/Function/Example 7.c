/* Changes to parameters in function don't change the values in calling function*/
#include<stdio.h>
void calculatePrice(float value);
int main()
{
    float value;
    printf("Enter price: ");
    scanf("%f",&value);
    calculatePrice(value);//in the parameters any change don't change actual argument (because a copy of argument is passed to the function
    printf("Value is : %f", value);
    return 0;
}

void calculatePrice(float value)
{
    value = value +(0.18*value);
    printf("Final prices is %f\n",value);
}
