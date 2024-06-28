
#include<stdio.h>
int main()
{
    int x,y,i,n,m;
    scanf("%d %d",&x,&y);
    m=y;
    for(i=0; i<y; i++)
    {
        m--;
        scanf("%d",&n);
        if(x==n)
        {
            printf("Right, Player-2 wins!");
        }
        else if(x!=n)
        {
            printf("wrong, %d Choices(s) Left!",m);
        }
        else
            printf("player-1 wins!");
    }
}

