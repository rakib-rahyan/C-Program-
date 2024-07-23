#include<stdio.h>
int main()
{
    int k = 0;
    while (k <= 20)
    {
        int l = k;
        while (l >= 0)
        {
            printf("%d ", l);
            l -= 2;
        }
        printf("\n");
        k += 2;
    }
}


