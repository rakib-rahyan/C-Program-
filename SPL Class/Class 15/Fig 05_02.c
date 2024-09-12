//Finding the maximum of three integers.
#include<stdio.h>

int maximum(int x, int y, int z);

int main(void)
{
    int number1=0;
    int number2=0;
    int number3=0;
    printf("1st number: ");
    scanf("%d",&number1);
    printf("2nd number: ");
    scanf("%d",&number2);
    printf("3ed number: ");
    scanf("%d",&number3);

    printf("Maximum is: %d\n",maximum(number1, number2, number3));
}

int maximum(int x, int y, int z)
{
    int max =x;

    if(y>max){
        max=y;
    }
    if(x>max){
        max=z;
    }
    return max;
}
