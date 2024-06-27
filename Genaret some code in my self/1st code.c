// This programme for calculate UIU tuition fees
#include<stdio.h>
int main()
{
    float credit, registration_fee, tuition_fees, cradit_fee,with_cradit_fee;
    printf("Enter your credit: ");
    scanf("%f",&credit);
    printf("Enter your Tuition fees par credit: ");
    scanf("%f",&tuition_fees);
    printf("Enter your registration fees: ");
    scanf("%f",&registration_fee);

    cradit_fee=credit*tuition_fees;
    printf("Your total credit fee: %f\n",cradit_fee);
    with_cradit_fee=cradit_fee+registration_fee;
    printf("With registration fee: %f",with_cradit_fee);
}

