#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Input 3 integer number: ");
    scanf("%d %d %d",&a,&b,&c);

    switch((a+b)<=80&&b>=0){
    case 0:
        printf("1)(a+b)<=80&&b>=0: 0\n");
        break;
    case 1:
        printf("1)(a+b)<=80&&b>=0: 1\n");
    }
    switch((a-b)==0||c!=0){
        case 0:
            printf("2)(a-b)==0||c!=0: 0\n");
            break;
        case 1:
            printf("2)(a-b)==0||c!=0: 1\n");
            break;
    }
    switch(a!=b||(b<a)&&c>0){
        case 0:
            printf("3)a!=b||(b<a)&&c>0: 0");
            break;
        case 1:
            printf("3)a!=b||(b<a)&&c>0: 1");
            break;
    }
}
