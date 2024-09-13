#include<stdio.h>
void PosNegZer(int n);
int main()
{
    int n;
    printf("Enter integer number number: ");
    scanf("%d",&n);
    PosNegZer(n);
    return 0;
}

void PosNegZer(int n)
{

    if(n<0)
    {
        printf("Negetive");
    }
    else if(n>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Zero");
    }
}

