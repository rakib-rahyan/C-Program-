#include<stdio.h>
int main()
{
    /*
        int i = 0;
        while (i < 5)
        {
            int j = 0;
            while (j < i)
            {
                printf("%d ", j);
                j++;
            }
            printf("\n");
            i++;
        }
    */

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
