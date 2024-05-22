//check leap year using ternary operator.
#include<stdio.h>
int main()
{
    int year;
    printf("Input year: ");
    scanf("%d",&year);

    (year%4==0 && year%100!=0)||(year%400==0)? printf("%d is leap year\n",year):printf("%d is not leap year\n",year);

    main();
    return 0;
}
