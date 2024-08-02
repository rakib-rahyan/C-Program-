#include<stdio.h>
int main()
{
    char n;
    printf("Enter your grade (A,B,C,D) : ");
    scanf("%c",&n);
    switch(n){
        case 'A' : printf("Excellent"); break;
        case 'B' : printf("Good"); break;
        case 'C' : {
            printf("Averag");
            switch(n=='C'){
                case 1: printf(" -Needs improvment");
            }
            break;
        }
        case 'D' : printf("Below Average"); break;
        default: printf("Fail");
    }
}

