
#include<stdio.h>
int main()
{
    int x,y,i,n;
    scanf("%d %d",&x,&y);
    for(i=0; i<y; i++)
    {
        scanf("%d",&n);
        if(x==n)
        {
            printf("Right, Player-2 wins!");
        }
        else if(x!=n)
        {
            printf("wrong, %d Choices(s) Left!");
        }
        else
            printf("player-1 wins!");
    }
}

