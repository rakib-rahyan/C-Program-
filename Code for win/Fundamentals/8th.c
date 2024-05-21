//Convert temperature from degree celsius to fahrenhit.
#include<stdio.h>
int main()
{
    float celcius, fahrenheit;// for store
    // input temperature in celsius
    printf("Enter temperature in Celsius= ");
    scanf("%f",&celcius);
    //celsius to fahrenheit conversion formula.
    fahrenheit=(celcius*9/5)+32;

    printf("Temperature in Fahrenheit: %f",fahrenheit);

    return 0;
}
