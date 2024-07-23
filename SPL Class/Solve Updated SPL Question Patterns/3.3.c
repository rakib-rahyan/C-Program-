#include<stdio.h>
int main()
{
/*
    for (int j = 10; j > 0; j--)
    {
        for (int k = j; k > 0; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
*/
    int j=10;
    while(j>0){
        int k=j;
        while(k>0){
            printf("%d ",k);
            k--;
        }
        printf("\n");
        j--;
    }
}

