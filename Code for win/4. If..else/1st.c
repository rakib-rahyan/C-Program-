//find maximum between two numbers in if else
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Input num1: ");
    scanf("%d",num1);
    printf("Input num2: ");
    scanf("%d",num2);

    if(num1>num2){
        printf("Maximum= %d\n",num1);
    }
    else if(num2>num1){
        printf("Maximum= %d\n",num2);
    }
    else{
        printf("Wrong input");
    }

    main();
    return 0;
}
