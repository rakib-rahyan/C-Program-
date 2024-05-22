// Convert centimeter to meter and kilometer.
#include<stdio.h>
int main()
{
    float centimeter; //for store.
    printf("Enter length in centimeter: ");
    scanf("%f",&centimeter); //for input scan

    float meter, kilometer;
    // Calculation
    meter=centimeter/100;
    kilometer=centimeter/100000;
    //for output
    printf("length is meter= %0.2f m\nLength is kilometer =%f km",meter, kilometer);

    return 0;
}
