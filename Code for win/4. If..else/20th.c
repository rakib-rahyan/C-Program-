//enter basic salary and calculate gross salary of an employee
#include<stdio.h>
int main()
{
    float sal, dar, hra, gross;
    printf("Input basic salary of an employee: ");
    scanf("%f",&sal);

    if(sal<=10000){
        dar=sal*0.8;
        hra=sal*0.2;
    }
    else if(sal>=10001 && sal<=20000){
        dar=sal*0.90;
        hra=sal*0.25;
    }
    if(sal>=20001){
        dar=sal*.95;
        hra=sal*0.3;
    }
    gross=sal+dar+hra;
    printf("%f",gross);
}
