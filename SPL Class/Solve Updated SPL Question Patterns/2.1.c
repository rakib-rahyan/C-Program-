#include<stdio.h>
int main()
{
    int x;
    printf("Enter x integer number: ");
    scanf("%d",&x);
    /*switch(x)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        if (x == 2)
        {
            printf(" - Second");
        }
        break;
    case 3:
        printf("Three");
        break;
    default:
        printf("Other");
    }
    */
    if(x==1)printf("One");
    else if(x==2){
        printf("Two");
        switch(x==2){
            case 1: printf("-second");
        }
    }
    else if(x==3)printf("Three");
    else printf("Other");
}
