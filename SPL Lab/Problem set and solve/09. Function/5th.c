#include<stdio.h>
void GrLeEq(int x, int y);
int main()
{
    int x,y;
    printf("Enter 1st integer number number: ");
    scanf("%d",&x);
    printf("Enter 2nd integer number number: ");
    scanf("%d",&y);
    GrLeEq(x,y);
    return 0;
}

void GrLeEq(int x, int y)
{

    if(x==y)
    {
        printf("%d is equal to %d",x,y);
    }
    else if(x<y)
    {
        printf("%d is less then %d",x,y);
    }
    else if(x>y)
    {
        printf("%d is greater then %d",x,y);
    }
    else printf("Wrong input");
}
