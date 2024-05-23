//Print day of week
#include<stdio.h>
int main()
{
    int week;
    printf("Input week number: ");
    scanf("%d",&week);

    if(week==1){
        printf("Sunday\n");
    }
    else if(week==2){
        printf("Monday\n");
    }
    else if(week==3){
        printf("Tuesday\n");
    }
    else if(week==4){
        printf("Wednesday\n");
    }
    else if(week==5){
        printf("Thursday\n");
    }
    else if(week==6){
        printf("Friday\n");
    }
    else if(week==7){
        printf("Saturday\n");
    }
    else{
        printf("Ether input is not 1-7 or invalid input\n");
    }
    printf("If you want run the program input again.\n");

    main();
    return 0;
}
