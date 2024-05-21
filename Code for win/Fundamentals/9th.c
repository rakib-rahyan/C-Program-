
// Convert centimeter to meter and kilometer.
#include<stdio.h>
int main()
{
    float celcius, fahrenheit;// for store
    // input temperature in celsius
    printf("Enter temperature in fahrenheit= ");
    scanf("%f",&fahrenheit);
    //celsius to fahrenheit conversion formula.
    celcius=(fahrenheit-32)*5/9;

    printf("Temperature in celcius: %f",celcius);
    return 0;
}
