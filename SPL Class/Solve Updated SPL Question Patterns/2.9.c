#include<stdio.h>
int main()
{
    char ope;
    int result, a=15, b=40;
    printf("Enter your opation (+,-,*,/: ");
    scanf("%c",&ope);

    /*
    switch(operation) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        if (operation == '*') {
            printf(" - Multiplication");
        }
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("Invalid Operation");
    }
    */
    if(ope=='+') result=a+b;
    else if(ope=='-')result=a-b;
    else if(ope=='*')
    {
        result=a*b;
        switch(ope=='*')
        {
        case 1:
            printf(" - Multiplication");
        }
    }
    else if(ope=='/')result=a/b;
    else printf("Invalid operation");
    printf("\nresult= %d",result);
}
