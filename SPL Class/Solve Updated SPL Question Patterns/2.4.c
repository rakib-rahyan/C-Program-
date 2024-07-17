#include<stdio.h>
int main()
{
    char color;
    printf("Enter color 1st small letter: ");
    scanf("%c",&color);
/*
    if (color == 'r')
    {
        printf("Red");
    }
    else if (color == 'g')
    {
        printf("Green");
    }
    else if (color == 'b')
    {
        printf("Blue");
        if (color == 'b')
        {
            printf(" - Cool color");
        }
    }
    else
    {
        printf("Unknown");
    }
*/
    switch(color){
        case 'r': printf("Red");
            break;
        case 'g': printf("Green");
            break;
        case 'b': printf("Blue");
                switch(color=='b'){
                case 1: printf(" -Cool Color");}
            break;
        default: printf("Unknown");
    }
}
