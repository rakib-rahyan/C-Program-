#include<stdio.h>
char FunctionChar();
int main()
{
    printf("Value received from main:%c", FunctionChar());
    return 0;
}

char FunctionChar()
{
    char c;
    printf("Enter character: ");
    scanf("%c",&c);
    return c;
}
