//find maximum between two numbers using switch case
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Input first number: ");
    scanf("%d",&num1);

    printf("Input second number: ");
    scanf("%d",&num2);

    switch(num1>num2){
        case 1:printf("Maximum: %d\n",num1);
        break;
        case 0:printf("Maximum: %d\n",num2);
        break;
    }

    main();
    return 0;
}
