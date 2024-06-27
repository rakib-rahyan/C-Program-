// This programme for calculate UIU tuition fees
#include<stdio.h>
int main()
{
    float credit=10, registration_fee=6500, tuition_fees=5525, total_cradit_fee,with_cradit_fee;

//    printf("Enter your credit: ");
//    scanf("%f",&credit);
//    printf("Enter your Tuition fees par credit: ");
//    scanf("%f",&tuition_fees);
//    printf("Enter your registration fees: ");
//    scanf("%f",&registration_fee);

    total_cradit_fee=credit*tuition_fees;
    printf("Your total credit fee: %f\n",total_cradit_fee);
    with_cradit_fee=total_cradit_fee+registration_fee;
    printf("With registration fee: %f\n",with_cradit_fee);

    printf("In registration you can pay 15000tk\n");

    if(with_cradit_fee<=15000){
        printf("You can pay 15000 tk on registration but your total ragistration and cradit fee lass or equal 15000 tk\n");
        if(with_cradit_fee!=15000){
            printf("Your posetive blance in UCam: %f\n",15000-with_cradit_fee);
        }
        else if(with_cradit_fee==15000){
            printf("you Ucam blance is 0\n");
            printf("your do not need pay this semister after pay in ragistration fee\n");
        }
    }

    float after_pay_registration;

    if(with_cradit_fee>15000){

    after_pay_registration=with_cradit_fee-15000;
    printf("So you pay after registration: %f\n",after_pay_registration);

     float _1st_installment, _2nd_installment, _3ed_installment;
    _1st_installment=(total_cradit_fee/100)*40;
    _2nd_installment=(total_cradit_fee/100)*30;
    _3ed_installment=_2nd_installment;
    printf("In 1st installment pay %%40 of total cradit fee: %f\n",_1st_installment);
    printf("In 2nd installment pay %%0 of total cradit fee: %f\n",_2nd_installment);
    printf("In 3ed installment pay %%30 of total cradit fee: %f\n",_3ed_installment);
    }



}

