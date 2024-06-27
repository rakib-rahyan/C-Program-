// This programme for calculate UIU tuition fees
#include<stdio.h>
int main()
{
    float credit, registration_fee, tuition_fees, total_cradit_fee,with_cradit_fee,alrady_pay;

    printf("Enter your credit: ");
    scanf("%f",&credit);
    printf("Enter your Tuition fees par credit: ");
    scanf("%f",&tuition_fees);
    printf("Enter your registration fees: ");
    scanf("%f",&registration_fee);

    total_cradit_fee=credit*tuition_fees;
    printf("Your total credit fee: %f\n",total_cradit_fee);
    with_cradit_fee=total_cradit_fee+registration_fee;
    printf("With registration fee: %f\n",with_cradit_fee);
    alrady_pay= 15000-registration_fee;
    printf("In registration you can pay 15000tk\n");
    printf("Cut for your registration %ftk in your 1st installment alredy pay %f\n",registration_fee,alrady_pay);

    if(with_cradit_fee<=15000)
    {
        printf("You can pay 15000 tk on registration but your total ragistration and cradit fee lass or equal 15000 tk\n");
        if(with_cradit_fee!=15000)
        {
            printf("Your posetive blance in UCam: %f\n",15000-with_cradit_fee);
        }
        else if(with_cradit_fee==15000)
        {
            printf("you Ucam blance is 0\n");
            printf("your do not need pay this semister after pay in ragistration fee\n");
        }
    }

    float after_pay_registration;

    if(with_cradit_fee>15000)
    {

        after_pay_registration=with_cradit_fee-15000;
        printf("So you pay after registration: %f\n",after_pay_registration);

        float _1st_installment, _2nd_installment, _3ed_installment;
        _1st_installment=(total_cradit_fee/100)*40;
        _2nd_installment=(total_cradit_fee/100)*30;
        _3ed_installment=_2nd_installment;
        printf("In 1st installment pay %%40 of total cradit fee: %f\n",_1st_installment);
        printf("On registration you can pay 15000tk so you can pay alrady in 1st installment: %f\n",alrady_pay);
        printf("Now in 1st installment date pay just %f\n",_1st_installment-alrady_pay);
        printf("In 2nd installment pay %%30 of total cradit fee: %f\n",_2nd_installment);
        printf("In 3ed installment pay %%30 of total cradit fee: %f\n",_3ed_installment);
    }
    printf("if you want turn off this program press any key");
    getch();
    return 0;

}

