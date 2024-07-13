#include<stdio.h>
int main()
{
    int y;
    printf("Enter y integer number: ");
    scanf("%d",&y);
    /*if (y == 1)
    {
        printf("January");
    }
    else if (y == 2)
    {
        printf("February");
    }
    else if (y == 3)
    {
        printf("March");
        if (y == 3)
        {
            printf(" - Third month");
        }
    }
    else
    {
        printf("Other");
    }*/
    switch(y)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        switch(y==3)
        {
        case 1:
            printf("-Thirt month");
        }
        break;
    default:
        printf("Other");
    }
}

