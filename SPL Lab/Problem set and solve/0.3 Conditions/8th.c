#include<stdio.h>
int main()
{
    int year;
    printf("Enter year for see this year is leap year? =");
    scanf("%d",&year);

    if((year%4==0&&year%100!=0)||(year%400==0)){
        printf("This is leap year\n");
    }
    else{
        printf("This is not leap year\n");
    }

    main();
    return 0;
}

