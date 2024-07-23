#include<stdio.h>
int main()
{
/*
    for (int k = 0; k <= 20; k += 2)
    {
        for (int l = k; l >= 0; l -= 2)
        {
            printf("%d ", l);
        }
        printf("\n");
    }
*/
    int k=0;
    while(k<=20){
        int l=k;
        while(l>=0){
            printf("%d ",l);
            l-=2;
        }
        printf("\n");
        k+=2;
    }
}



