#include<stdio.h>
int main()
{
    int note;
    printf("Input amount: ");
    scanf("%d",&note);

    int rem1, rem2, rem3, rem4, rem5, rem6, res1, res2, res3, res4, res5, res6;

    res1=note/1000;
    printf("1000 = %d\n",res1);

    rem1=note%1000;
    res2=rem1/500;
    printf("500 = %d\n",res2);

    rem2=rem1%500;
    res2=rem2/100;
    printf("100 = %d\n",res2);

    rem3=rem2%100;
    res3=rem3/50;
    printf("50 = %d\n",res3);

    rem4=rem3%50;
    res4=rem4/10;
    printf("10 = %d\n",res4);

    rem5=rem4%10;
    res5=rem5/5;
    printf("5 = %d\n",res5);

    rem6=rem5%5;
    res6=rem6/1;
    printf("5 = %d\n",res6);

    main();
    return 0;
}

