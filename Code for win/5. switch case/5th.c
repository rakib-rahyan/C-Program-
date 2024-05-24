#include<stdio.h>
int main()
{
    int num;
    printf("Input number: ");
    scanf("%d",&num);

    switch(num%2){
        case 1:printf("Odd number\n");
        break;
        case 0:printf("Even number\n");
        break;
    }
    printf("If want to run again pleace input./n");

    main();
    return 0;
}
