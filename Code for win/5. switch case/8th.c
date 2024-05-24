#include<stdio.h>
int main()
{
    float num1, num2, res;
    char ch;
    printf("enter <num1><operator><num1> : ");
    scanf("%f %c %f",&num1, &ch, &num2);

    switch(ch){
        case '+': res=num1+num2;
        break;
        case '-': res=num1-num2;
        break;
        case '*': res=num1*num2;
        break;
        case '/': res=num1/num2;
        break;
        default:
            printf("Invalid Operator.\n");
    }
    printf("result is %0.2f %c %0.2f = %0.2f\n", num1, ch, num2, res);
    printf("If you want run again pleace input\n");

    main();
    return 0;
}

