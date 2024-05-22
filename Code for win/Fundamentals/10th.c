// convert days to years weeks and days
#include<stdio.h>
int main()
{
    int years, weeks, days, rem1, rem2;  //for storage
    printf("Enter days: ");
    scanf("%d",&days); //input scan

    years=days/365;
    printf("%d years ",years);
    rem1= days%365;
    weeks= rem1/7;
    printf("%d weeks ",weeks);
    rem2= rem1%7;
    printf("%d days ",rem2);

    return 0;
}

