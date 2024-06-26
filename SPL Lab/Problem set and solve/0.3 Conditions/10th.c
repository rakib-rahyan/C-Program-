#include<stdio.h>
int main()
{
    int num1,num2;
    char ch;
    printf("Input integer: Number1, Operator(+,-,*,/), number= ");
    scanf("%d %c %d",&num1,&ch,&num2);

    switch(ch){
        case '+': printf("%d %c %d= %d",num1,ch,num2, num1+num2);
        break;
        case '-': printf("%d %c %d= %d",num1,ch,num2, num1-num2);
        break;
        case '*': printf("%d %c %d= %d",num1,ch,num2, num1*num2);
        break;
        case '/': switch(num2==0){
                    case 0: printf("%d %c %d= %d",num1,ch,num2, num1/num2);
                    break;
                    case 1: printf("Zero as divisor in not valid!");
                    break;
                }
        break;
    }

    return 0;
}
