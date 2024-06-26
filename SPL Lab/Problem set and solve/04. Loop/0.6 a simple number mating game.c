#include<stdio.h>
int main()
{

     int p1, p2, r, i=0;
    scanf("%d %d",&p1, &p2);

    for(i; p2>i;--p2){
        p2--;
        scanf("%d",&r);
        if(r==p1){
            printf("Right player 2 wins!\n");
        }
        else if(p2>i){
            printf("wrong, %d choice(s) left\n",p2);
        }
        else{
            printf("player-1 wins!\n");
        }
    }


}


