//calculate electricity bill
#include<stdio.h>
int main()
{
    float unit, bill, charge, bill2;
    printf("Input units: ");
    scanf("%f",&unit);

    if(unit<=50){
        bill=unit*0.50;
    }
    else if(unit>50&&unit<=150){
        bill=unit*0.75;
    }
    else if(unit>150&&unit<=250){
        bill=unit*1.20;
    }
    else if(unit>250){
        bill=unit*1.50;
    }
    charge=bill*0.2;
    bill2=bill+charge;
    printf("TK= %f\n",bill2);

    main();
    return 0;
}
